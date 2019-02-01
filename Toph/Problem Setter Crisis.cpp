#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<unsigned long long,unsigned long long>p1,pair<unsigned long long,unsigned long long>p2)
{
    if(p1.first<p2.first)
        return true;
    if(p1.first==p2.first)
        return p1.second>p2.second;
    return false;
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        unsigned long long time;
        cin>>time;
        vector<pair<unsigned long long,unsigned long long> > v;
        for(int i=0;i<n;i++)
        {
            unsigned long long ti,d;
            cin>>ti>>d;
            v.push_back(make_pair(ti,d));
        }
        sort(v.begin(),v.end(),cmp);
        unsigned long long num=0,di=0,tot=0;
        bool ss=false;
        for(int i=0;i<v.size();i++)
        {
            unsigned long long a,b;
            a=v[i].first;
            b=v[i].second;
            if(tot+a>time)
            {
                if(num==0)
                    break;
                if(!ss)
                    tot=tot-v[i-1].first;
                ss=true;
            }
            if(!ss){
            num++;
            tot+=a;
            if(b>di)
                di=b;
            }
            else
            {
                if(tot+a<=time)
                {
                    if(b>di)
                        di=b;
                }
            }
        }
        if(num==0)
            cout<<"Case "<<t<<": RIP LUIUPC"<<endl;
        else
            cout<<"Case "<<t<<": "<<num<<" "<<di<<endl;
    }
    return 0;
}
