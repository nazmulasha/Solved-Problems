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

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}
