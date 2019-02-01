#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int sum=0,ws=0;
        for(int i=0;i<n;i++)
        {
            if(i==p)
                break;
            ws+=arr[i];
            if(ws>q)
                break;
            sum++;
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }
    return 0;
}
