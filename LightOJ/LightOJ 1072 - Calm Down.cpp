#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

double pi= acos(-1);

int main()
{
    int tt;
    scanf("%d",&tt);
    for(int t=1;t<=tt;t++)
    {
    double r,n;
    cin>>r>>n;
    double tmp=sin(pi/n);
    double ans=tmp*(r/(tmp+1));
    cout<< fixed;cout.precision(10);
    cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
