#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=n*m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int i=0,j=0,inc=1;
    while(cnt--)
    {
        if(i==n)
        {
            j++;
            i=n-1;
            inc=-1;
        }
        if(i==-1)
        {
            inc=1;
            j++;
            i=0;
        }
        //cout<<i<<" "<<j<<" "<<arr[i][j]<<" "<<endl;
        cout<<arr[i][j]<<" ";
        i+=inc;

    }
    cout<<endl;
    return 0;
}