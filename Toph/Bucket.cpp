#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first>p2.first)
        return true;
    else if(p1.first==p2.first)
        return p1.second>p2.second;

}
long int n;
bool equ(long int x)
{
    return x==n;
}

int main()
{
    int q;
    cin>>q;
    vector<long int>v;
    map<long int,int>m;
    while(q--)
    {
        vector<long int> :: iterator it;
        int t;
        cin>>t>>n;
        if(t==1)
            v.push_back(n);
        else if(t==2)
        {
            it = remove_if(v.begin(), v.end(), equ);
            v.erase(it,v.end());
        }
        else if(t==3)
        {
            it = remove_if(v.begin(), v.end(), bind2nd(less<long int>(),n));
            v.erase(it,v.end());
        }
        else
        {
            it = remove_if(v.begin(), v.end(), bind2nd(greater<long int>(),n));
            v.erase(it,v.end());
        }
    }
    if(v.size()>0)
    {
        cout<<v[0];
        m[v[0]]=1;
    }

    for(int i=1;i<v.size();i++)
    {
        if(m[v[i]]==0)
        {
            cout<<" "<<v[i];
            m[v[i]]=1;
        }

    }
    if(v.size()>0)
        cout<<endl;
    return 0;
}
