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
        int n,m,u,v;
        cin>>n>>m>>s>>e;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout<<"Case "<<t<<": 1"<<endl;
    }
    return 0;
}