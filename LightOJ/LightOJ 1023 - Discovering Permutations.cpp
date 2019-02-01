#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int t=1;t<=tt;t++)
    {
        int n,k;
        cin>>n>>k;
        string st="";
        for(int i=0;i<n;i++)
        {
            st+=str[i];
        }
        cout<<"Case "<<t<<":"<<endl;
        cout<<st<<endl;
        k--;
        while(next_permutation(st.begin(),st.end()))
        {
            if(k==0)
                break;
            cout<<st<<endl;
            k--;
        }
        //cout<<k<<endl;

    }
    return 0;
}
