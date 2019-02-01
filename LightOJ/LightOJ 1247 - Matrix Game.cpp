#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int m,n,xsum=0;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            int sum=0,tmp;
            for(int j=0;j<n;j++)
            {
                cin>>tmp;
                sum+=tmp;
            }
            xsum^=sum;
        }
        if(xsum)
            cout<<"Case "<<t<<": Alice"<<endl;
        else
            cout<<"Case "<<t<<": Bob"<<endl;
    }
}
