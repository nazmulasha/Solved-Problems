#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,y;
    cin>>x>>y;
    y-=x;
    y/=2;
    y+=x;
    cout<<y<<endl;

    return 0;
}