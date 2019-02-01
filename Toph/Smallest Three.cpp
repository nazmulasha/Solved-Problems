#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <math.h>
#include <ctype.h>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long int arr[3];
    cin>>arr[0];
    cin>>arr[1];
    n-=2;
    int o=2;
    while(n--)
    {
        long int x;
        cin>>x;
        if(o==2)
        {
            arr[2]=x;
            sort(arr,arr+3);
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
            o++;
        }
        else
        {
            if(arr[2]>x)
                arr[2]=x;
            sort(arr,arr+3);
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        }


    }
    return 0;
}