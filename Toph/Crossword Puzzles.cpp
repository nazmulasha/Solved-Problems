#include <bits/stdc++.h>
using namespace std;

vector<int>adj[105];
bool visited [1005];
int s,e;
int work(int u)
{
    if(u==e)
        return 1;
    if(adj[u].size()==0)
        return 0;
    if(visited[u])
        return 1;

}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int m,n;
        cin>>m>>n;
        string str[m];
        for(int i=0;i<m;i++)
            cin>>str[i];
        string ans="zz";
        for(int i=0;i<105;i++)
            ans+="z";
        for(int i=0;i<m;i++)
        {
            string tmp="";
            for(int j=0;j<n;j++)
            {
                if(str[i][j]=='X')
                {
                    if(tmp.size()>1&&tmp<ans)
                        ans=tmp;
                    tmp="";
                }
                else
                    tmp+=str[i][j];
            }
            if(tmp.size()>1&&tmp<ans)
                ans=tmp;
        }
        for(int i=0;i<n;i++)
        {
            string tmp="";
            for(int j=0;j<m;j++)
            {
                if(str[j][i]=='X')
                {
                    if(tmp.size()>1&&tmp<ans)
                        ans=tmp;
                    tmp="";
                }
                else
                    tmp+=str[j][i];
            }
            if(tmp.size()>1&&tmp<ans)
                ans=tmp;
        }
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}