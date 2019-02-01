#include <bits/stdc++.h>

using namespace std;
#define mx 100005
#define INF 0x3f3f3f3f
vector<pair<int,int> >adj[mx];
bool visited[mx];
int cost[mx];
long long int dijk(int s)
{
    long long int tcost=0;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<mx;i++)
        cost[i]=INF;
    cost[s]=0;
    priority_queue< pair<int,int>, vector <pair<int,int> > , greater<pair<int,int> > > pq;
    pq.push({0,s});
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].second;
            int c=adj[u][i].first;
            if(cost[v]>cost[u]+c)
            {
                cost[v]=cost[u]+c;
                pq.push({cost[v],v});
                tcost=tcost+c;
            }
        }
    }
    return tcost;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int u,v,c;
        cin>>u>>v>>c;
        adj[u].push_back({c,v});
       // adj[v].push_back({c,u});
    }
    long long int ans=dijk(1);
    ans*=2;
    cout<<ans<<endl;
    return 0;
}
