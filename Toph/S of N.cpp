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

long long int arr[1005];
void work()
{
    arr[1]=28;
    for(int i=2;i<=1000;i++)
    {
        long long int tmp=(i-1)*3;
        tmp++;
        long long int x=tmp*(tmp+3)*(tmp+6);
        arr[i]=arr[i-1]+x;
    }
}
int main()
{
    work();
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<arr[x]<<endl;
    }
    return 0;
}