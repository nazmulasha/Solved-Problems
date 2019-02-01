#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    long long int sm=0,bi=0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            sm++;
        else if(str[i]>='A'&&str[i]<='Z')
            bi++;
    }
    cout<<bi<<" "<<sm<<endl;

}
