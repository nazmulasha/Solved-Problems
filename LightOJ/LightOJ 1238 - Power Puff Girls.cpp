#include <bits/stdc++.h>

using namespace std;

#define mx 25

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int m,n;
        cin>>m>>n;
        char arr[m][n];
        int ai,aj,bi,bj,ci,cj,hi,hj;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='h')
                {
                    hi=i,hj=j;
                }
            }
        }
        queue<pair<int,int> >q;
        q.push(make_pair(hi,hj));
        int ans=0;
        int d[mx][mx];
        int visited[mx][mx],cnt=0;
        memset(visited,0,sizeof(visited));
        memset(d,0,sizeof(d));
        visited[hi][hj]=true;
        while(!q.empty())
        {
          //  cout<<"yes"<<endl;
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i>0&&visited[i-1][j]==0)
            {
                visited[i-1][j]=true;
                if(arr[i-1][j]!='m'&&arr[i-1][j]!='#')
                {
                    q.push(make_pair(i-1,j));
                    d[i-1][j]=d[i][j]+1;
                    if(arr[i-1][j]=='a'||arr[i-1][j]=='b'||arr[i-1][j]=='c')
                    {
                     //   cout<<arr[i-1][j]<<" "<<d[i-1][j]<<endl;
                        ans=max(ans,d[i-1][j]);
                        cnt++;
                    }
                }
            }
            if(j>0&&visited[i][j-1]==0)
            {
                visited[i][j-1]=true;
                if(arr[i][j-1]!='m'&&arr[i][j-1]!='#')
                {
                    q.push(make_pair(i,j-1));
                    d[i][j-1]=d[i][j]+1;
                    if(arr[i][j-1]=='a'||arr[i][j-1]=='b'||arr[i][j-1]=='c')
                    {
                     //   cout<<arr[i][j-1]<<" "<<d[i][j-1]<<endl;
                        ans=max(ans,d[i][j-1]);
                        cnt++;
                    }
                }
            }
            if(i<m-1&&visited[i+1][j]==0)
            {
                visited[i+1][j]=true;
                if(arr[i+1][j]!='m'&&arr[i+1][j]!='#')
                {
                    q.push(make_pair(i+1,j));
                    d[i+1][j]=d[i][j]+1;
                    if(arr[i+1][j]=='a'||arr[i+1][j]=='b'||arr[i+1][j]=='c')
                    {
                     //   cout<<arr[i+1][j]<<" "<<d[i+1][j]<<endl;
                        ans=max(ans,d[i+1][j]);
                        cnt++;
                    }
                }
            }
            if(j<n-1&&visited[i][j+1]==0)
            {
                visited[i][j+1]=true;
                if(arr[i][j+1]!='m'&&arr[i][j+1]!='#')
                {
                    q.push(make_pair(i,j+1));
                    d[i][j+1]=d[i][j]+1;
                    if(arr[i][j+1]=='a'||arr[i][j+1]=='b'||arr[i][j+1]=='c')
                    {
                      //  cout<<arr[i][j+1]<<" "<<d[i][j+1]<<endl;
                        ans=max(ans,d[i][j+1]);
                        cnt++;
                    }
                }
            }
         //   visited[i][j]=true;

        }
        while(!q.empty())
            q.pop();
        printf("Case %d: %d\n",t,ans);
    }
}
