#include <bits/stdc++.h>

using namespace std;
#define pii acos(-1)
#define mx 10000001
#define mod 1000000000000037



int main()
{
    //gen();
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<n;
        for(int i=n+1;i<=0;i++)
            cout<<" "<<i;
        cout<<endl;
        return 0;
    }
    cout<<0;
    for(int i=1;i<=n;i++)
        cout<<" "<<i;
    cout<<endl;
    return 0;
}
