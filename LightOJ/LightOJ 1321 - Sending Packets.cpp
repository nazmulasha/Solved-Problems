#include <bits/stdc++.h>

using namespace std;
long double arr[101][101];
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,m;
        double s,kk;
        cin>>n>>m>>s>>kk;
        memset(arr,0.0,sizeof(arr));
        for(int i=0;i<m;i++)
        {
            int u,v;
            double p;
            cin>>u>>v>>p;
            arr[u][v]=p/100.0;
            arr[v][u]=p/100.0;

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    arr[j][k]=max(arr[j][k],arr[j][i]*arr[i][k]);
                }
            }
        }
        double ans=(s*kk*2.0)/arr[0][n-1];
        cout<<fixed<<setprecision(10);
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
