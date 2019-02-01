#include <bits/stdc++.h>

using namespace std;
#define mx 100001
bool isprime[mx];
int dp[mx];
void sieve()
{
    for(int i=0;i<mx;i++)
        isprime[i]=true;
    isprime[1]=false;
    for(int i=3;i<=sqrt(mx);i++)
    {
        if(isprime[i])
        {
            for(int j=i+i;j<mx;j+=i)
                isprime[j]=false;
        }
    }
    for(int i=4;i<mx;i+=2)
        isprime[i]=false;
    memset(dp,0,sizeof(dp));
    dp[2]=1;
    for(int i=3;i<mx;i++)
    {
        dp[i]=dp[i-1];
        if(isprime[i])
            dp[i]++;
    }
}

int main()
{
    sieve();
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long int ans=0;
        int cnt=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                ans+=dp[cnt];
                cnt++;
            }
            else
            {
                ans+=dp[cnt];
                cnt=1;
            }
        }
        ans+=dp[cnt];
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}

