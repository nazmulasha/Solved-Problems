#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

long long int gcd(long long int x,long long int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    long long int a,b,x,y;
    cin>>a>>b>>x>>y;
    long long int tmp,tmp2;
    tmp=a-x;
    tmp2=b-y;
    if(tmp<0)
        tmp*=-1;
    if(tmp2<0)
        tmp2*=-1;
    long long int result;
    //cout<<tmp<<endl<<tmp2;
    result=gcd(tmp,tmp2);
    result++;
    cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}
