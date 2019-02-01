#include <bits/stdc++.h>

using namespace std;
int sumofd(string str)
{
    int tmp=0;
    for(int i=0;i<str.size();i++)
        tmp+=(str[i]-'0');
    return tmp;
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        string str;
        cin>>str;
        int s=0,sz=str.size();
        s=sumofd(str);
        if(sz%2==s%2)
            cout<<"Case "<<t<<": Safe to push"<<endl;
        else
            cout<<"Case "<<t<<": BOOM"<<endl;

    }
    return 0;
}
