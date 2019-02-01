#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int m;
        cin>>m;
        cout<<"Case "<<t<<":"<<endl;
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
