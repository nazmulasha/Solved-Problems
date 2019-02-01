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
        int pos[n*2],xsum=0;
        for(int i=0;i<n*2;i++)
        {
           cin>>pos[i];
        }
        for(int i=0;i<n*2;i+=2)
        {
            xsum^=(pos[i+1]-pos[i]-1);
        }
        if(xsum)
            cout<<"Case "<<t<<": Alice"<<endl;
        else
            cout<<"Case "<<t<<": Bob"<<endl;
    }
}
