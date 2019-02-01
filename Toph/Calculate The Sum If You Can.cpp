#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int n;
        cin>>n;
        long long int qt=n/2;
        if(n%2==1)
            qt++;
        n-=qt;
        long long int ans=qt-(2*n);
        cout<<ans<<endl;
    }
    return 0;
}
