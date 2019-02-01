#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        long long int x,y,z;
        cin>>x>>y>>z;
        long long int n=(z-x)/y;
        long long int sum=(2*x)+((n-1)*y);
        sum=sum*n;
        sum/=2;
        cout<<sum<<endl;
    }

    return 0;
}
