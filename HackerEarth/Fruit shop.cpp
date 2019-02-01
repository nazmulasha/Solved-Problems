    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int x,y,z;
        cin>>x>>y>>z;
        vector<pair<long long int,long long int> >v;
        pair<long long int,long long int>p;
        p.first=a;
        p.second=x;
        v.push_back(p);
        p.first=b;
        p.second=y;
        v.push_back(p);
        p.first=c;
        p.second=z;
        v.push_back(p);
        sort(v.begin(),v.end());
        long long int m;
        cin>>m;
        long long int ans=0;
        for(int i=0;i<3;i++)
        {
            if(m<=0)
                break;
            a=v[i].first;
            x=v[i].second;
            long long int tmp=a*x;
            if(tmp>m)
            {
                ans+=(m/a);
                break;
            }
            else
            {
                ans+=x;
                m-=tmp;
            }
        }
        cout<<ans<<endl;
        return 0;
    }