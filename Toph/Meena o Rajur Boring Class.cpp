#include <bits/stdc++.h>

using namespace std;
#define pi 3.141593
int main()
{
    long long int dp[36];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i=3;i<36;i++)
        dp[i]=dp[i-1]+dp[i-2];
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        double a,b,ans=0.0;
        for(int i=1;i<=n;i++)
        {
            double r=(double)dp[i];
            double sq=r*r;
            double cir=pi*r*r;
            cir/=4;
            ans+=(sq-cir);
        }
        cout<<fixed<<setprecision(2);
        cout<<ans<<endl;
    }

    return 0;
}