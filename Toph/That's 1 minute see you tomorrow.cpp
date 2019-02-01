#include <bits/stdc++.h>

using namespace std;
#define pii acos(-1)
#define mx 10000001
#define mod 1000000000000037



int main()
{
    //gen();
    int n,m;
    cin>>n>>m;
    bool ss=true;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k<m)
            ss=false;
        sum+=m;
    }
    if(sum!=60)
        ss=false;
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
