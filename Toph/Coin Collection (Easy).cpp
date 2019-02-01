#include <bits/stdc++.h>

using namespace std;
int mod=100;
long long int gcd(long long int a,long long int b)
{
    return(b==0)?a:gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
    return(a/gcd(a,b))*b;
}
long long int dp[1005];
long long int work(int sum)
{
    if(sum==0)
        return 0;
    else if(sum==1)
        return 0;
    else if(sum==2)
        return 1;
    else if(sum==3)
        return 1;
    else if(sum>3&&dp[sum]>0)
        return dp[sum]%100;
    else
    {

        for(int i=2;i<=sum;i++)
        {
            int tmp=sum-i;
            dp[sum]+=(work(tmp)%100);
        }
        return (dp[sum]+=1)%100;
    }
}
int main()
{

    memset(dp,0,sizeof(dp));
    int n,m;
    cin>>n>>m;
    int sum=m+n;
    cout<<work(sum)%100<<endl;


    return 0;

}