#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        vector<pair<int,string> >v;
        for(int i=0;i<n;i++)
        {
            string str;
            int a,b,c;
            cin>>str>>a>>b>>c;
            v.push_back(make_pair(a*b*c,str));

        }
        sort(v.begin(),v.end());
        if(v[0].first==v[n-1].first)
            cout<<"Case "<<t<<": no thief"<<endl;
        else
            cout<<"Case "<<t<<": "<<v[n-1].second<<" took chocolate from "<<v[0].second<<endl;
    }

    return 0;
}
