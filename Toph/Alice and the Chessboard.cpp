#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(abs(x1-x2)==abs(y1-y2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}