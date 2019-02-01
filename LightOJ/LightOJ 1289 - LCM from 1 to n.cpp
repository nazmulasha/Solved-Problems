#include <bits/stdc++.h>

using namespace std;

#define mod 4294967296
#define MAX 100000100
#define LMT 10000

unsigned int flag[MAX/64+10];
unsigned int prime[5761509];
unsigned int dp[5800000];
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
unsigned i,j,k;
void sieve()
{

    flag[0]|=0;
    dp[0]=2;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);

    prime[(j=0)++] = 2;
    for(i=3;i<MAX;i+=2)
        if(!chkC(i))
        {
            prime[j] = i;
            dp[j]=dp[j-1]*i;
            j++;
        }

}
int main()
{
    sieve();
    int tt;
    scanf("%d",&tt);
    for(int t=1;t<=tt;t++)
    {
        int n;
        scanf("%d",&n);
        int k=0;
        unsigned int ans=1;
        int tmp=sqrt(n);

        while(prime[k]*prime[k]<=n)
        {
            long long int tmp=prime[k]*prime[k],tm=prime[k];
            while (tmp/tm==prime[k]&&tmp<=n)
            {
                tmp*=prime[k];
                tm*=prime[k];
            }
            ans=(ans*(tm/prime[k]));
            k++;
        }
       // cout<<ans<<endl;
        int p=upper_bound(prime,prime+j,n)-prime-1;
        //cout<<p<<endl;
        ans=ans*(dp[p]);
        printf("Case %d: %lld\n",t,ans);
    }
    return 0;
}