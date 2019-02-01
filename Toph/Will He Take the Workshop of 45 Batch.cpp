#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ss,str;
    cin>>ss>>str;

    map<char,int>m1,m2;
    for(int i=0;i<ss.size();i++)
        ss[i]=tolower(ss[i]);
    for(int i=0;i<str.size();i++)
        str[i]=tolower(str[i]);
    for(int i=0;i<ss.size();i++)
    {
        for(int j=0;j<str.size();j++)
        {
            if(ss[i]==str[j]){
                m1[ss[i]]=j+1;
                break;
            }
        }
    }
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<ss.size();j++)
        {
            if(str[i]==ss[j]){
                m2[str[i]]=j+1;
                break;
            }
        }
    }
    for(int i=0;i<ss.size();i++)
    {
        int t=m1[ss[i]]-1;
        cout<<t;
        if(i+1==ss.size())
            cout<<"."<<endl;
        else
            cout<<",";
    }

    for(int i=0;i<str.size();i++)
    {
        int t=m2[str[i]]-1;
        cout<<t;
        if(i+1==str.size())
            cout<<"."<<endl;
        else
            cout<<",";
    }

    return 0;
}