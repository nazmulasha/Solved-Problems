#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define max 10000000
unsigned long long int mod= 18446744073709551610;
unsigned long long int arr[max];

void makee()
{
    arr[1]=1;
    arr[2]=2;
    for(int i=2;i<max;i++)
    {
        if(i%2!=0){
        int tmp=i/2;
        arr[i]=arr[tmp]*arr[tmp+1]+2;
        }
        else
        {
            int tmp=i/2;
            arr[tmp*2]=(arr[tmp]*arr[tmp])+1;
        }
    }

}
unsigned long long int work(long long int n)
{
    if(n<max)
        return arr[n];
    else
    {
        if(n%2==0)
        {
            unsigned long long int tmp=work(n/2);
            tmp%=mod;
            tmp=(tmp*tmp);
            tmp%=mod;
            return tmp+1;
        }
        else
        {
            unsigned long long int tmp=work(n/2);
            tmp%=mod;
            long long int tmp2=work((n/2)+1);
            tmp%=mod;
            return ((tmp*tmp2))+2;
        }
    }
}

int main()
{
   makee();
    int x;
    cin>>x;
    for(int t=1;t<=x;t++)
    {
        long long int n;
        cin>>n;
        unsigned long long int r=work(n)%mod;
        cout<<"Case "<<t<<": "<<r<<endl;
    }

    return 0;
}