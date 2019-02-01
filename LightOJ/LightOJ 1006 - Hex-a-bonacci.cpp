#include <iostream>

using namespace std;
#define mod 10000007
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int a[6],n;
        for(int i=0;i<6;i++)
            cin>>a[i];
        cin>>n;
        long long int dp[10005];
        for(int i=0;i<10005;i++)
            dp[i]=0;
        for(int i=0;i<6;i++)
            dp[i]=a[i];
        for(int i=6;i<=n;i++)
        {
            dp[i]+=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
            dp[i]%=mod;
        }
        cout<<"Case "<<t<<": "<<dp[n]%mod<<endl;
    }
    return 0;
}
