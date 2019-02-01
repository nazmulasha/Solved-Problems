#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        string ss;
        int mn=0,mb=0;
        cin>>ss;
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]>='A'&&ss[i]<='Z')
                mb++;
            else if(ss[i]>='a'&&ss[i]<='z')
                mn++;
        }
        mb=ss.size()-mb;
        mn=ss.size()-mn;
        cout<<"Case "<<t<<": "<<min(mb,mn)<<endl;
    }
    return 0;
}

