#include <bits/stdc++.h>

using namespace std;
#define mx 20021361
unsigned long int dp[mx];
long long int findterm(long long int x)
{
    double tmp=sqrt(1+8*x);
    tmp=tmp-1.0;
    tmp=tmp/2.0;
    long long int trm=ceil(tmp);
    //cout<<trm<<" "<<tmp<<endl;
    return trm;
}
int main()
{
    dp[1]=1;
    for(int i=1;i<mx-1;i++)
    {
        unsigned long int tmp=dp[i];
        unsigned long int ttt=tmp+(2*(i-1));
        dp[i+1]=ttt+1;
    }
    int tt;
    scanf("%d",&tt);
    for(int t=1;t<=tt;t++)
    {

        long long int n;
        scanf("%lld",&n);
        long long int trm=findterm(n);
        long long int pretrm=trm*(trm-1);
        pretrm/=2;
        long long int nt=n-pretrm;
        unsigned long long int ttt=2*(nt-1);
        unsigned long long int curr=dp[mx-1],next;
        unsigned long long int ans=0;
        if(trm>=mx)
        {
            for(int i=mx-1;i<trm;i++)
            {
                unsigned long int tmp=curr;
                unsigned long int ttt=tmp+(2*(i-1));
                next=ttt+1;
                curr=next;
            }
            ans=next+ttt;
        }
        else
            ans=dp[trm]+ttt;
        //cout<<trm<<" "<<n<<" "<<pretrm<<" "<<nt<<" "<<dp[trm]<<" "<<ttt<<endl;
        printf("Case %d: %llu\n",t,ans);




    }
    return 0;
}

