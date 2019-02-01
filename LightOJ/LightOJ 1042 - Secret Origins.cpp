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
        vector<int>v;
        while(n)
        {
            if(n%2==0)
                v.push_back(0);
            else
                v.push_back(1);
            n/=2;
        }
        v.push_back(0);
        reverse(v.begin(),v.end());
        next_permutation(v.begin(),v.end());
        long long int ans=0;
        int p=v.size()-1;
        for(int i=0;i<v.size();i++)
        {
            ans+=(v[i]*(pow(2,p)));
            p--;
        }
        cout<<"Case "<<t<<": "<<ans<<endl;
    }

    return 0;
}
