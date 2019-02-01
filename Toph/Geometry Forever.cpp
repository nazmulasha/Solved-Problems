#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    int ans=0;
    for(int i=1;i<sum;i++)
    {
        int c=i;
        if(a+b>c&&a+c>b&&b+c>a)
            ans++;
    }
    cout<<ans<<endl;

    return 0;

}
