#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int arr[25];
    arr[0]=1;
    for(int i=1;i<21;i++)
    {
        arr[i]=i*arr[i-1];
    }
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int n;
        cin>>n;
        vector<int>v;
        for(int i=20;i>=0;i--)
        {
            if(arr[i]>n)
                continue;
            v.push_back(i);
            n-=arr[i];
        }
        if(n!=0)
        {
            cout<<"Case "<<t<<": impossible"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<t<<": ";
        for(int i=0;i<v.size()-1;i++)
            cout<<v[i]<<"!+";
        cout<<v[v.size()-1]<<"!"<<endl;
    }

    return 0;
}
