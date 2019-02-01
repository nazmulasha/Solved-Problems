#include <bits/stdc++.h>

using namespace std;
#define mx 100

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
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {

        int n;
        cin>>n;
        unsigned long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long int ans=0;
        for(int i=0;i<40;i++)
        {
            long long int tmp=0;
            for(int j=0;j<n;j++)
            {
                if((arr[j] & 1) != 0)
                    tmp++;
                arr[j] >>= 1;
            }
            ans+=tmp*(n-tmp);
        }
        cout<<ans<<endl;



    }
    return 0;
}
