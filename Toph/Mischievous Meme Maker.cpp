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
    long long int prime[51];
    prime[0]=1;
    prime[1]=2;
    long long int sum=3;
    for(int i=2;i<51;i++)
    {
        prime[i]=sum+1;
        sum+=prime[i];

    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<prime[i];
            if(i==n-1)
                cout<<endl;
            else
                cout<<" ";
        }
    }
    return 0;
}


