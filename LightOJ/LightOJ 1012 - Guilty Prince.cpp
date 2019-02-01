#include <bits/stdc++.h>

using namespace std;
#define mx 25
int visited[mx][mx];
char arr[mx][mx];
int cnt=0,w,h;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int w,h,si,sj;
        cin>>w>>h;
        memset(visited,0,sizeof(visited));
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='@')
                {
                    si=i;
                    sj=j;
                }
            }
        }
        queue<pair<int,int> >q;
        q.push(make_pair(si,sj));
        cnt=1;
       // cout<<si<<" "<<sj<<endl;
        while(!q.empty())
        {
            int i,j;
            i=q.front().first;
            j=q.front().second;

            q.pop();
            if(visited[i][j])
                continue;
              //  cout<<i+1<<" "<<j+1<<endl;
            if(i!=0&&arr[i-1][j]=='.')
                q.push(make_pair(i-1,j));
            if(j!=0&&arr[i][j-1]=='.')
                q.push(make_pair(i,j-1));
            if(i<(h-1)&&arr[i+1][j]=='.')
                q.push(make_pair(i+1,j));
            if(j<(w-1)&&arr[i][j+1]=='.')
                q.push(make_pair(i,j+1));
            if(!visited[i][j]&&arr[i][j]=='.')
                cnt++;
            visited[i][j]=1;
        }
        cout<<"Case "<<t<<": "<<cnt<<endl;

    }
    return 0;
}
