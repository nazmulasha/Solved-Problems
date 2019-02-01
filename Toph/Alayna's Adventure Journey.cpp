#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int tmp,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        ans=max(tmp,ans);
    }
    cout<<ans<<endl;

}
