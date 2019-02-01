#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        int black[n],white[n];
        for(int i=0;i<n;i++)
            cin>>white[i];
        for(int i=0;i<n;i++)
            cin>>black[i];
        int xsum=black[0]-white[0]-1;
        for(int i=1;i<n;i++)
            xsum=xsum^(black[i]-white[i]-1);
        if(xsum)
            cout<<"Case "<<t<<": white wins"<<endl;
        else
            cout<<"Case "<<t<<": black wins"<<endl;
    }
}
