#include <bits/stdc++.h>

using namespace std;
double dp[1000005];
int main()
{

    dp[0]=0.0;
    dp[1]=0.0;
    for(int i=2;i<1000002;i++)
        dp[i]=log(i)+dp[i-1];
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int a,b;
        cin>>a>>b;
        long long int ans=(long long int)(dp[a]/log(b)+1);
        cout<<"Case "<<t<<": "<<ans<<endl;
    }

}
