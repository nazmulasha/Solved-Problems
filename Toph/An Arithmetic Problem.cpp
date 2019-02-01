#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        cout<<"Case "<<t<<": ";
        if(a>b&&b<c)
            cout<<"Error"<<endl;
        else if(a<b&&b>c)
            cout<<"Error"<<endl;
        else
        {
            int d1,d2;
            d1=b-a;
            d2=c-b;
            if(d1!=d2)
                cout<<"Error"<<endl;
            else
            {
                int r=(n-1)*d1;
                r+=a;
                cout<<r<<endl;
            }
        }
    }
    return 0;
}