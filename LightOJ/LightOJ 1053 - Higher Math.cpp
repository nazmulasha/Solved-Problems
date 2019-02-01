#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int arr[3];
        for(int i=0;i<3;i++)
            cin>>arr[i];
        sort(arr,arr+3);
        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2])
            cout<<"Case "<<t<<": yes"<<endl;
        else
            cout<<"Case "<<t<<": no"<<endl;
    }
    return 0;
}
