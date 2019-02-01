#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    long long int ans=0;
    unordered_map<char,int>m;
    m['a']=1;
    m['A']=1;
    m['e']=1;
    m['E']=1;
    m['i']=1;
    m['I']=1;
    m['o']=1;
    m['O']=1;
    m['u']=1;
    m['U']=1;
    for(int i=0;i<str.size();i++)
    {
        if(m[str[i]]>0)
            ans++;
    }
    cout<<ans<<endl;

}