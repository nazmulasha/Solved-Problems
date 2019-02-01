#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        long long int x,sum=0;
        while(n--)
        {
            cin>>x;
            if(x>0)
            sum+=x;
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }

    return 0;
}
