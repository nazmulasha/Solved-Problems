#include <bits/stdc++.h>

using namespace std;

void extEuclid(long long int a, long long int b, long long int &x, long long int &y, long long int &gcd)
{
    x = 0, y = 1, gcd = b;
    long long int m, n, q, r;

    for(long long int u = 1, v = 0; a != 0; gcd = a, a = r) {
        q = gcd / a; r = gcd % a;
        m = x-u*q; n = y-v*q;
        x = u; y = v; u = m; v = n;
    }
}

long long int inv(long long int n, long long int m)
{
    long long int x, y, gcd;
    extEuclid(n, m, x, y, gcd);
    if(gcd == 1) return (x % m);
    return 0;
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int n;
        cin>>n;
        long long int arr[15],rem[15];
        for(int i=0;i<n;i++)
            cin>>arr[i]>>rem[i];
        long long int prod=1;
        for(int i=0;i<n;i++)
            prod*=arr[i];
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            long long int pp=prod/arr[i];
            long long int tmp=inv(pp,arr[i]);
            if(tmp<0)
                tmp+=arr[i];
            ans+=pp*rem[i]*tmp;
            ans%=prod;
        }
        ans%=prod;
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
}
