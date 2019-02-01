#include <bits/stdc++.h>

using namespace std;
#define mx 100005
vector<int> adj[mx];

int main()
{

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool visited[n+5];
        memset(visited,0,sizeof(visited));
        int d[n+5];
        memset(d,0,sizeof d);
        queue<int>q;
        q.push(1);
        int even =0,odd=0;
        visited[1]=true;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            if(adj[u].size()==1)
            {
                if(d[u]%2==0)
                    even++;
                else
                    odd++;
            }
            for(int i=0;i<adj[u].size();i++)
            {
                int v=adj[u][i];
                if(!visited[v])
                {
                    q.push(v);
                    d[v]=d[u]+1;
                }
            }
            visited[u]=true;

        }
        int no=0,ne=0;

        for(int i=1;i<=n;i++)
        {
           // cout<<d[i]<<" ";
            if(d[i]%2==0)
                ne++;
            else
                no++;
        }
     //   cout<<endl;
       // cout<<even<<" "<<odd<<" "<<ne<<" "<<no<<endl;
        int ans;
        if(even==0||odd==0)
        {
            ans=n-1;
        }
        else
            ans=n;
        if(n==2)
            ans=0;
        cout<<"Case "<<tt<<": "<<ans<<endl;
        for(int i=1;i<=n;i++)
            adj[i].clear();
    }
    return 0;
}