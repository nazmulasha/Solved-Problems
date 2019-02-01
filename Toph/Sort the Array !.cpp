#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    unsigned long long x;
    vector<unsigned long long>v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
        v2.push_back(x);
    }
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(v2.begin(),v2.end());
    unsigned long long lo=v2[0],hi=v2[n-1];
    bool islo=false,ishi=false;
    if(v2[0]==v2[1])
        islo=true;
    if(v2[n-1]==v2[n-2])
        ishi=true;
    bool issorted=true;
    for(int i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            issorted=false;
            break;
        }
    }
    if(issorted)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(v1[0]==lo||v1[n-1]==hi)
        cout<<1<<endl;
    else if(v1[0]==hi&&v1[n-1]==lo)
    {
        if(n==3)
            cout<<2<<endl;
        else if(islo==true||ishi==true)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    else
        cout<<2<<endl;

    return 0;
}
