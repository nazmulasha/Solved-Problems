#include <iostream>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        int r,g,b;
        cin>>r>>g>>b;
        //cout<<r<<" "<<g<<" "<<b<<endl;
        for(int i=1;i<n;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            int t1=x+min(g,b);
            int t2=y+min(r,b);
            int t3=z+min(g,r);
            r=t1,g=t2,b=t3;
       //     cout<<r<<" "<<g<<" "<<b<<endl;
        }
        cout<<"Case "<<t<<": "<<min(r,min(g,b))<<endl;
    }
    return 0;
}
