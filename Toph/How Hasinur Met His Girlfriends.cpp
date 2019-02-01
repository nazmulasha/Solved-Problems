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
    //prime();
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        string str;
        cin>>str;
        unordered_map<string,int>m;
        int ans=0;
        for(int i=0;i<str.size();i++)
        {
            string ss="";
            for(int j=i;j<str.size();j++)
            {
                ss+=str[j];
                if(m[ss]==0)
                {
                    m[ss]=1;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
