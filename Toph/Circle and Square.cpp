#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        double r;
        cin>>r;
        double ans=r;
        while(r>=0.000000001)
        {
            r+=r;
            r=r/sqrt(2);
            r/=2;
            ans+=r;
        }
        cout<<fixed<<setprecision(1);
        cout<<ans<<endl;
    }

    return 0;
}
