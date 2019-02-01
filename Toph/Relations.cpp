#include <bits/stdc++.h>

using namespace std;
#define mx 100001
bool visited[mx];
vector<pair<long long int,long long int> >adj[mx];
map<int,int>mm;
long long int cost[mx];

void bfs(int x)
{
    queue<pair<int,long long int> >q;
    mm[x]=x;
    cost[x]=0;
    q.push({x,0});
    visited[x]=true;
    while(!q.empty())
    {
        int u=q.front().first;
        q.pop();
        long long int c=q.front().second;;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            long long int cc=adj[u][i].second;
            if(!visited[v])
            {
                visited[v]=true;
                cost[v]=cost[u]+cc;
                q.push({v,cost[v]});
                mm[v]=x;
            }
        }
        visited[u]=true;
    }
}

int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    for(int i=0;i<m;i++)
    {
        long long int a,b,x;
        cin>>a>>b>>x;
        adj[a].push_back({b,x});
        adj[b].push_back({a,-x});
    }
    memset(visited,0,sizeof(visited));
    memset(cost,0,sizeof(cost));
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            bfs(i);
        }
    }
    while(q--)
    {
        long long int a,b,p;
        cin>>a>>b>>p;
       // cout<<mm[a]<<" "<<mm[b]<<endl;
        if(mm[a]!=mm[b])
            cout<<-1<<endl;
        else
        {
            long long int ath=cost[a];
            ath*=(-1);
            ath+=p;
            //cout<<mm[a]<<" "<<ath<<endl;
            long long int ans=ath+cost[b];
            cout<<ans<<endl;
        }
    }
    return 0;
}
