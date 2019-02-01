#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int a,b,sum=0;
        cin>>a>>b;
        sum+=(llabs(a-b)*4);
        sum+=(llabs(a)*4);
        sum+=19;
        cout<<"Case "<<t<<": "<<sum<<endl;
    }

    return 0;
}
