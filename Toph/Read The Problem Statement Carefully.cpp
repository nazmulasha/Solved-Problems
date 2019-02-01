#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string ss="";
    for(int i=0;i<4;i++)
        ss+=str[i];
    int tmp=atoi(ss.c_str());

    if(tmp<2000)
        cout<<"CSE department started its journey from 2000-2001"<<endl;
    else{
        cout<<"CSE-";
        ss="";
        for(int i=5;i<9;i++)
            ss+=str[i];
        int x=atoi(ss.c_str());
        cout<<x%2000<<endl;
    }
    return 0;
}