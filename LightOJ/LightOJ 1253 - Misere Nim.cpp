#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,xsum=0,nochance=0;
        cin>>n>>xsum;
        if(xsum==1)
            nochance++;
        for(int i=1;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1)
                nochance++;
            xsum^=x;
        }
        if(nochance==n&&n%2==0)
            cout<<"Case "<<t<<": Alice"<<endl;
        else if(nochance==n&&n%2==1)
            cout<<"Case "<<t<<": Bob"<<endl;
        else if(xsum)
            cout<<"Case "<<t<<": Alice"<<endl;
        else
            cout<<"Case "<<t<<": Bob"<<endl;
    }
}
