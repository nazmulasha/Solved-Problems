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
    int n;
    cin>>n;
    string str[n];
    int ans=0,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        reverse(str[i].begin(),str[i].end());
        int sz=str[i].size();
        mx=max(mx,sz);
    }
    int cc=0;
    for(int i=0;i<mx;i++)
    {
        int sum=cc;
        for(int j=0;j<n;j++)
        {
            if(str[j].size()<=i)
                continue;
            sum+=(str[j][i]-'0');
        }
        cc=sum/10;
       // cout<<sum<<" "<<cc<<endl;
        if(sum>9)
            ans++;


    }
    //cout<<cc<<endl;
    while(cc>9)
    {
        ans++;
        cc/=10;
    }
    cout<<ans<<endl;
    return 0;
}

