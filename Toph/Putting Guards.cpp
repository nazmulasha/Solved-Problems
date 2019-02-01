#include <bits/stdc++.h>
using namespace std;


int main()
{
   // freopen("in.txt","r",stdin);
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int m,n;
        cin>>m>>n;
        char str[m+3][n+3];
        for(int i=0;i<m+3;i++)
        {
            for(int j=0;j<n+3;j++)
            {
                str[i][j]='0';
            }
        }
      //  cout<<" gg"<<endl;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
                cin>>str[i][j];
        }
        int cost[m+3][n+3];
        memset(cost,0,sizeof(cost));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str[i][j]=='1')
                {


                    string tmp="";
                    tmp+=str[i-1][j-1];
                    tmp+=str[i-1][j];
                    tmp+=str[i][j-1];
                    if(tmp!="111"&&tmp!="010"&&tmp!="001")
                        cost[i-1][j-1]=1;
                    tmp="";
                    tmp+=str[i-1][j];
                    tmp+=str[i-1][j+1];
                    tmp+=str[i][j+1];
                    if(tmp!="111"&&tmp!="001"&&tmp!="100")
                        cost[i-1][j]=1;
                    tmp="";
                    tmp+=str[i][j-1];
                    tmp+=str[i+1][j-1];
                    tmp+=str[i+1][j];
                    if(tmp!="111"&&tmp!="001"&&tmp!="100")
                        cost[i][j-1]=1;
                    tmp="";
                    tmp+=str[i+1][j];
                    tmp+=str[i+1][j+1];
                    tmp+=str[i][j+1];
                    if(tmp!="111"&&tmp!="001"&&tmp!="100")
                        cost[i][j]=1;
                }


            }
        }
        int ans=0;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
               // cout<<cost[i][j]<<" ";
                ans+=cost[i][j];
            }
            //cout<<endl;
        }

        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
