#include <bits/stdc++.h>
 
using namespace std;
 
int dp[101][101];
int minin(string str,int l,int r)
{
    if(l>r)
        return 0;
    if(l==r)
        return 0;
    if(dp[l][r]!=-1)
        return dp[l][r];
    int ans;
    if(str[l]==str[r])
        ans=minin(str,l+1,r-1);
    else
        ans=min(minin(str,l+1,r)+1,minin(str,l,r-1)+1);
    dp[l][r]=ans;
    return ans;
}
 
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        memset(dp,-1,sizeof(dp));
        string str;
        cin>>str;
        cout<<"Case "<<t<<": "<<minin(str,0,str.size()-1)<<endl;
    }
    return 0;
}