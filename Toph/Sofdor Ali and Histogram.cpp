#include <iostream>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        long long int max=0;
        for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            long long int tmp=x*(n-i);
            if(tmp>max)
                max=tmp;
        }
        cout<<"Case "<<t<<": "<<max<<endl;
    }
    return 0;
}
