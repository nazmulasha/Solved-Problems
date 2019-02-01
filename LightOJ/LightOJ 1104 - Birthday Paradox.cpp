#include <bits/stdc++.h>

using namespace std;
#define eps 0.0001
long double work(long double base,int p)
{
    if(p==0)
        return 1.0;
    else if(p%2==0)
    {
        long double tmp=work(base,p/2);
        return tmp*tmp;
    }
    else
        return base*work(base,p-1);
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        int ans=1;
        double prob;
        double pwr=(double)n,upp=(double)n,dh=(double)n,tmp=1.0;
        while(1)
        {
            tmp*=upp;
            tmp/=dh;
            upp=upp-1.0;
            prob=1.0-tmp;
           // cout<<ans<<" "<<prob<<" "<<tmp<<endl;
            if(prob>=0.5)
                break;
            ans++;
            if(isinf(tmp)||isnan(tmp))
                break;

        }
        cout<<"Case "<<t<<": "<<ans-1<<endl;
    }
    return 0;
}
