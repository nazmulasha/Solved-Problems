#include <bits/stdc++.h>

using namespace std;
long long int gcd(long long int a,long long int b)
{
    return(b==0)?a:gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
    return(a/gcd(a,b))*b;
}

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,m;
        cin>>n>>m;
        unordered_map<string,int>x,y;
        int a=0,b=0;
        while(n--)
        {
            string str;
            cin>>str;
            if(x[str]==0){
                a++;
                x[str]++;
            }
        }
        while(m--)
        {
            string str;
            cin>>str;
            if(y[str]==0){
                b++;
                y[str]++;
            }
        }
        cout<<"Case "<<t<<":"<<endl;
        cout<<"Jackal "<<a<<endl<<"Bari "<<b<<endl;
    }

    return 0;

}