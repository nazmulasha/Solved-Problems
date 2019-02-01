#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int ans=1;
    while(m)
    {
        long long int t=n/m;
        ans*=t;
        m--;
        n-=t;
    }
    cout<<ans<<endl;

    return 0;
}