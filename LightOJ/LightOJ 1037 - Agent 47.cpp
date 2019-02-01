#include <bits/stdc++.h>

using namespace std;
const int INF = 0x3f3f3f3f;
int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

int dp[1<<15+2];
int w[20][20];
int n;
int power[20];

int work(int num,int mask)
{
    if(num==n)
        return 0;
    if(dp[mask]!=-1)
        return dp[mask];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(check(mask,i)==0)
        {
            for(int j=0;j<=n;j++)
            {
              //  cout<<i<<" "<<j<<endl;
                if(check(mask,j)!=0&&w[j][i]!=0)
                {

                    int ttt=power[i]/w[j][i];
                    if(power[i]%w[j][i]!=0)
                        ttt++;
                    ans=min(ans,ttt+work(num+1,Set(mask,i)));
                    mask=reset(mask,i);
                }
            }
        }
    }
    dp[mask]=ans;
    return dp[mask];
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>power[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                char c;
                cin>>c;
                w[i][j]=(int)c-'0';
            }
        }
        for (int i = 0; i < n; i++) {
			w[n][i] = 1;
        }

        int ans=work(0,Set(0,n));
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
}