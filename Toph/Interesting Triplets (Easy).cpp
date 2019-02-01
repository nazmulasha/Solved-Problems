#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first>p2.first)
        return true;
    else if(p1.first==p2.first)
        return p1.second>p2.second;

}

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n;
        cin>>n;
        int cost[n+1][n+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cost[i][j]=9898998;
            }
        }
        for(int i=1;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            cost[u][v]=1;
            cost[v][u]=1;
        }
        for (int k=1;k<=n;k++)
        {
            for (int i=1;i<=n;i++)
            {
                if(k==i)
                    continue;
                for (int j=1;j<=n;j++)
                {
                    if(k==j||i==j)
                        continue;
                    if(cost[i][k]+cost[k][j]<cost[i][j])
                        cost[i][j]=cost[i][k]+cost[k][j];
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                for(int k=1;k<=n;k++)
                {
                     if(k==i||k==j)
                        continue;
                    if(cost[i][j]+cost[j][k]==cost[i][k])
                        ans++;
                }
            }
        }
        cout<<"Case "<<tt<<": "<<ans<<endl;
    }
    return 0;
}