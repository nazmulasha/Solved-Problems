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
        long long int sq=ceil(sqrt(n));
        if(sq*sq==n)
        {
            if(sq%2==0)
            {
                cout<<"Case "<<t<<": "<<sq<<" 1"<<endl;
            }
            else
                cout<<"Case "<<t<<": 1 "<<sq<<endl;
            continue;
        }
        long long int diff=sq*sq-n;
        long long int r=1,c=1;
        if(diff<=sq-1)
        {
            r=diff+1;
            c=sq;
            if(sq%2==0)
                swap(r,c);
               // cout<<diff<<endl<<c<<endl;
        }
        else
        {
            r=sq;
            diff-=sq-1;
            c=sq-diff;
            if(sq%2==0)
                swap(r,c);
        }
        cout<<"Case "<<t<<": "<<r<<" "<<c<<endl;

    }

    return 0;
}
