#include <bits/stdc++.h>

using namespace std;
long long int factorial(int n)
{
      if(n==0)
           return 1;
      else
           return(n*factorial(n-1));
}

long long int ncr(int n,int r)
{
      long long int value;
      value=factorial(n)/(factorial(r)*factorial(n-r));
      return value;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,k;
        cin>>n>>k;
        if(n-1<k)
        {
            cout<<0<<endl;
            continue;
        }
        n--;
        long long int ans=ncr(n,n-k);
        cout<<ans<<endl;
    }
    //cout<<ans<<endl;
    return 0;
}