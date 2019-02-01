#include <bits/stdc++.h>

using namespace std;

#define sc(n) scanf("%d",&n)
#define mx 105
#define pii(x,y) make_pair(x,y)

vector<pair<int,int> >adj[mx];
int d[mx];
int visited[mx];

void dfs(int u)
{

}

priority_queue<pair<int,int>,vector<pair<int,int> > ,greater<pair<int,int> > > q;
int main()
{
    int tt;
    sc(tt);
    for(int t=1;t<=tt;t++)
    {
        int n;
        sc(n);
        for(int i=0;i<n;i++)
        {
            int u,v,c;
            sc(u),sc(v),sc(c);
            adj[u].push_back(pii(v,0));
            adj[v].push_back(pii(u,c));
        }
        for(int i=0;i<mx;i++)
            d[i]=9999999;
        stack<int>st;
        int vv=adj[1][0].first;
        st.push(vv);
        int cost=adj[1][0].second;
        int visited[mx];
        memset(visited,0,sizeof(visited));
        visited[1]=true;
        while(!st.empty())
        {

            int u=st.top();
             if(u==1)
                break;
            st.pop();
            if(visited[u])
                continue;
            for(int i=0;i<adj[u].size();i++)
            {
                int v=adj[u][i].first;
                int c=adj[u][i].second;
                if(!visited[v]){

                cost+=c;
                //cout<<u<<" "<<v<<" "<<c<<endl;
                st.push(v);
                }
            }
            visited[u]=1;
        }
        vv=adj[1][1].first;
        if(adj[vv][0].first==1)
            cost+=adj[vv][0].second;
        else
            cost+=adj[vv][1].second;
        memset(visited,0,sizeof(visited));
        visited[1]=true;
        st.push(vv);
        int cost2=adj[1][1].second;
        while(!st.empty())
        {

            int u=st.top();
             if(u==1)
                break;
            st.pop();
            if(visited[u])
                continue;
            for(int i=0;i<adj[u].size();i++)
            {
                int v=adj[u][i].first;
                int c=adj[u][i].second;
                if(!visited[v]){

                cost2+=c;
                //cout<<u<<" "<<v<<" "<<c<<endl;
                st.push(v);
                }
            }
            visited[u]=1;
        }
        vv=adj[1][0].first;
        if(adj[vv][0].first==1)
            cost2+=adj[vv][0].second;
        else
            cost2+=adj[vv][1].second;

        int ans=min(cost,cost2);
        printf("Case %d: %d\n",t,ans);
        for(int i=1;i<=n;i++)
            adj[i].clear();


    }

}
