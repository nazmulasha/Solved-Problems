#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>str[i]>>arr[i];
    long long int r;
    cin>>r;
    long long int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]=="add")
        {
            if(i==n-1)
                ans=r-arr[i];
            else
                ans-=arr[i];
        }
        else if(str[i]=="subtract")
        {
            if(i==n-1)
                ans=r+arr[i];
            else
                ans+=arr[i];

        }
        else if(str[i]=="multiply")
        {
            if(i==n-1)
                ans=r/arr[i];
            else
                ans/=arr[i];
        }
        else
        {
            if(i==n-1)
                ans=r*arr[i];
            else
                ans*=arr[i];
        }
       // cout<<ans<<" ";
    }
    cout<<ans<<endl;
    return 0;
}