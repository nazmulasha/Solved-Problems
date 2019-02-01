    #include <bits/stdc++.h>
     
    using namespace std;
    #define mx 10000
    #define pii pair< int, int >
    struct comp {
        bool operator() (const pii &a, const pii &b) {
            return a.second > b.second;
        }
    };
    priority_queue<pair<int,int> ,vector<pair<int,int> >,comp> q;
     
    int main()
    {
        int n,m,s,e;
        cin>>n>>m>>s>>e;
        vector<pair<int,int> >adj[mx];
        while(m--)
        {
            int u,v,c;
            cin>>u>>v>>c;
            pair<int,int>p;
            p.first=v;
            p.second=c;
            adj[u].push_back(p);
        }
        map<int,int>mm;
        int cnt=0;
        q.push(pii(s,0));
        int visited[mx],d[mx];
        memset(visited,0,sizeof(visited));
        for(int i=0;i<mx;i++)
            d[i]=99999999;
        d[s]=0;
        stack<int>st;
        while(!q.empty())
        {
            int tmp=q.top().first;
            q.pop();
            if(visited[e])
                break;
            if(visited[tmp])
                continue;
            for(int i=0;i<adj[tmp].size();i++)
            {
                int v,c;
                v=adj[tmp][i].first;
                c=adj[tmp][i].second;
                if(!visited[v]&&d[tmp]+c<d[v])
                {
                    d[v]=d[tmp]+c;
                    q.push(pii(v,d[v]));
                    if(mm[tmp]==0)
                    {
                        cnt++;
                        mm[tmp]++;
                    }
     
                }
     
            }
     
            visited[tmp]=1;
     
        }
        mm[e]++;
        cnt++;
        st.push(e);
        //cout<<cnt<<endl;
        long long int ans=d[e];
        if(d[e]==99999999)
        {
            cout<<-1<<endl;
            return 0;
        }
        while(!q.empty())
            q.pop();
        q.push(pii(e,0));
        memset(visited,0,sizeof(visited));
        for(int i=0;i<mx;i++)
            d[i]=99999999;
        d[e]=0;
        while(!q.empty())
        {
            if(visited[s])
                break;
            int tmp=q.top().first;
            q.pop();
            if(visited[tmp])
                continue;
            for(int i=0;i<adj[tmp].size();i++)
            {
                int v,c;
                v=adj[tmp][i].first;
                c=adj[tmp][i].second;
                if(!visited[v]&&d[tmp]+c<d[v])
                {
                    d[v]=d[tmp]+c;
                    q.push(pii(v,d[v]));
                    if(mm[tmp]>0)
                    {
                        cnt--;
                    }
     
                }
     
            }
            visited[tmp]=1;
        }
     
        if(d[s]==99999999||cnt!=1)
            cout<<-1<<endl;
        else
            cout<<ans+d[s]<<endl;
        return 0;
    }