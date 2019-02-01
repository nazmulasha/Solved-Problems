#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string str;
        long long int a;
        cin>>str>>a;
        long long int s=0;
        long long int j=0;
        if(str[0]=='-')
            j=1;
        for(int k=j;k<str.size();k++)
        {
            string ss="";
            ss+=str[k];
            s=s*10+atoi(ss.c_str());
            s=s%a;
        }
        cout<<"Case "<<i<<": ";
        if(s)
            cout<<"not divisible"<<endl;
        else
            cout<<"divisible"<<endl;
    }
    return 0;
}
