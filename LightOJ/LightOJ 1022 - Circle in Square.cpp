#include <bits/stdc++.h>

using namespace std;
double pi=2*acos(0.0);
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        double r;
        cin>>r;
        double ans=(4*r*r)-(pi*r*r);
        cout<<fixed<<setprecision(2);
        cout<<"Case "<<t<<": "<<ans<<endl;
    }

    return 0;
}
