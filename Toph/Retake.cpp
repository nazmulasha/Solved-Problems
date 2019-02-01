#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first>p2.first)
        return true;
    else if(p1.first==p2.first)
        return p1.second>p2.second;

}

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{
    int n,k;
    cin>>n>>k;
    double tot=0.0;
    vector<double>v;
    for(int i=0;i<n;i++)
    {
        double x ,y;
        cin>>x>>y;
        tot+=x;
        v.push_back(y-x);
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--)
    {
        if(k<=0)
            break;
        if(v[i]<=0.0)
            continue;
        tot+=v[i];
        k--;
    }
    cout<<fixed<<setprecision(2);
    cout<<(tot/n)<<endl;
    return 0;
}
