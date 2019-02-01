#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++){
    double a,b,c;
    cin>>a>>b>>c;
    double x,y,z;
    x=b+c;
    y=a+c;
    z=a+b;
    double q1,q2,q3;
    q1=acos((y*y+z*z-x*x)/(2*y*z));
    q2=acos((x*x+z*z-y*y)/(2*x*z));
    q3=acos((y*y+x*x-z*z)/(2*y*x));
    double tmp=(x+y+z)/2;
    double temp=(tmp*(tmp-x)*(tmp-y)*(tmp-z));
    temp=sqrt(temp);
    double area=temp-(0.5)*(a*a*q1+b*b*q2+c*c*q3);
    cout<<fixed<<setprecision(10);
    cout<<"Case "<<t<<": "<<area<<endl;
    }
    return 0;

}
