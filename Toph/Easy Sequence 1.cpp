#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define max 50000
long long int even[max];
void makee()
{
    even[1]=1;
    even[2]=2;
    for(int i=2;i<max;i++)
    {
        if(i%2!=0){
        int tmp=i/2;
        even[i]=even[tmp]*even[tmp+1]+2;
        }
        else
        {
            int tmp=i/2;
            even[tmp*2]=(even[tmp]*even[tmp])+1;
        }
    }

}

int main()
{

    int x;
    cin>>x;
     makee();
     //cout<<even[max-3]<<endl;
    for(int t=1;t<=x;t++)
    {
        long long int n;
        cin>>n;
        int r;
        for(int i=1;i<max;i++)
        {
            if(n==even[i])
            {
                r=i;
                break;
            }
        }
        cout<<"Case "<<t<<": "<<r<<endl;
    }

    return 0;
}