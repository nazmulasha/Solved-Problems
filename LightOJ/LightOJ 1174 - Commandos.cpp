#include <bits/stdc++.h>

using namespace std;

#define mx 105
#define sc(n) scanf("%d",&n);
#define pii(x,y) make_pair(x,y);

vector<int>adj[mx];
int main()
{
    int tt;
    sc(tt);
    for(int t=1;t<=tt;t++)
    {
        int n;
        sc(n);
        int m;
        sc(m);
        while(m--)
        {
            int u,v;
            sc(u);
            sc(v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int s,e;
        sc(s);sc(e);
        queue<int>st;
        st.push(e);
        int visited[mx];
        memset(visited,0,sizeof(visited));
        int d[mx];
        memset(d,0,sizeof(d));
        visited[e]=true;
        while(!st.empty())
        {
            int u=st.front();
            st.pop();
            for(int i=0;i<adj[u].size();i++)
            {
                int v=adj[u][i];
                if(!visited[v])
                {
                    d[v]=d[u]+1;
                    visited[v]=true;
                    st.push(v);
                }
            }
        }
        st.push(s);
        memset(visited,0,sizeof(visited));
        int d2[mx];
        memset(d2,0,sizeof(d2));
        visited[s]=true;
        while(!st.empty())
        {
            int u=st.front();
            st.pop();
            for(int i=0;i<adj[u].size();i++)
            {
                int v=adj[u][i];
                if(!visited[v])
                {
                    d2[v]=d2[u]+1;
                    visited[v]=true;
                    st.push(v);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,d[i]+d2[i]);
        }
        printf("Case %d: %d\n",t,ans);
        for(int i=0;i<n;i++)
            adj[i].clear();
    }
}
