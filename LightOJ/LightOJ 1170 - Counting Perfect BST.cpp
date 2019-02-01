#include <bits/stdc++.h>
 
using namespace std;
 
#define mx 10000000001
#define mod 100000007
vector<long long int>pp;
long long int dp[5000],total;
void genPP()
{
    for(long long int i=2;i<=sqrt(mx);i++)
    {
        for(int j=2;;j++)
        {
            long long int tmp=pow(i,j);
            if(tmp>mx)
                break;
            pp.push_back(tmp);
        }
    }
    sort(pp.begin(),pp.end());
    pp.erase(unique(pp.begin(),pp.end()),pp.end());
}
 
long long int prec(int root)
{
    if(root<1)
        return 1;
    if(dp[root]>-1)
        return dp[root];
    dp[root]=0;
    for(int i=0;i<root;i++)
    {
        dp[root]+=((prec(i)%mod)*(prec(root-i-1)%mod))%mod;
        dp[root]%=mod;
    }
    return dp[root];
}
 
int main()
{
    //freopen("debug.in","in",stdin);
    genPP();
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=5;
    prec(3000);
 
    for(int i=0;i<3000;i++)
    {
 
        if(dp[i]==-1){
            prec(i);
        }
    }
   // for(int i=0;i<10;i++)
        //cout<<dp[i]<<endl;
 
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int a,b;
        cin>>a>>b;
        int n=upper_bound(pp.begin(),pp.end(),b)-lower_bound(pp.begin(),pp.end(),a);
        cout<<"Case "<<t<<": "<<dp[n]<<endl;
    }
    return 0;
}