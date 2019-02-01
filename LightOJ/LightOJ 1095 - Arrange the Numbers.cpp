#include <bits/stdc++.h>

using namespace std;
long long int  mod= 1000000007;
int mx =1005;
long long int NcR[1005][1005];
long long int fact[1005];
void gen()
{
    fact[0]=1;
    for(int i=1;i<mx;i++)
    {
        fact[i]=((long long int)i*fact[i-1])%mod;
    }
    for(int i=0;i<mx;i++){
        NcR[i][0]=1;
        NcR[i][i]=1;
    }
    for(int i=1;i<mx;i++)
    {
        for(int j=1;j<mx;j++)
        {
            NcR[i][j]=(NcR[i-1][j]+NcR[i-1][j-1])%mod;
        }
    }
}
int main()
{
    gen();
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        long long int ans=fact[n-k]%mod;
        for(int i=1;i<=m-k;i++)
        {
            if(i%2==0)
            {
                ans+=((NcR[m-k][i]*fact[n-k-i])%mod);
                ans%=mod;
            }
            else
            {
                ans-=((NcR[m-k][i]*fact[n-k-i])%mod);
                ans%=mod;
            }
        }
        ans=(ans*NcR[m][k])%mod;
        ans=(ans+mod)%mod;
        cout<<"Case "<<t<<": "<<ans<<endl;
    }

    return 0;
}
