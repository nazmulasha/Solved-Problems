#include <bits/stdc++.h>

using namespace std;

bool comp(pair<float,string>p,pair<float,string>p2)
{
    if(p.first==p2.first)
        return p.second<p2.second;
    return p.first>p2.first;
}

int main()
{

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        long long int n,m,k;
        cin>>n>>m>>k;
        n*=100;
        if(m*k<=n)
            cout<<"Case "<<tt<<": YES"<<endl;
        else
            cout<<"Case "<<tt<<": NO"<<endl;
    }
    return 0;
}
