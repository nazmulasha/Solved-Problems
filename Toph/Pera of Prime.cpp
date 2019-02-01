#include <bits/stdc++.h>

using namespace std;
#define mx 1000001
int dp[mx];

long long int gcd(long long int a,long long int b)
{
    return (b==0)?a:gcd(b,a%b);
}

void prime()
{
    for(int i=0;i<mx;i++)
        dp[i]=1;
    dp[0]=0,dp[1]=0;
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(dp[i]==1)
        {
            for(int j=i+i;j<mx;j+=i)
            {
                dp[j]=0;
            }
        }
    }
    for(int i=4;i<mx;i+=2)
        dp[i]=0;
    for(int i=1;i<mx;i++)
        dp[i]+=dp[i-1];
}




int main()
{
    prime();
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int a,b;
        cin>>a>>b;
        int cnt=dp[b]-dp[a-1];
        int tot=b-a+1;
        int gc=gcd(tot,cnt);
       // cout<<cnt<<" "<<tot<<" "<<gc<<" ";
        cout<<"Case "<<t<<": ";
        if(cnt==tot)
            cout<<1<<endl;
        else if(cnt==0)
            cout<<0<<endl;
        else
            cout<<cnt/gc<<"/"<<tot/gc<<endl;
    }
    return 0;
}