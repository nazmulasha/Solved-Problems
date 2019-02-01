#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int r,c,xsum=0;
        cin>>r>>c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int tmp;
                cin>>tmp;
                if(((r-i)+(c-j))%2==0)
                    continue;
                xsum^=tmp;
            }
        }

        if(xsum)
            cout<<"Case "<<t<<": win"<<endl;
        else
            cout<<"Case "<<t<<": lose"<<endl;
    }
}
