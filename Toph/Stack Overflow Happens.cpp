#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool ans=true;
    string ss,str;
    int cnt=0;
    while(cin>>ss>>str)
    {
        if(ss=="return")
            {
            if(str=="main()"){
                    cnt-=3;
                break;
            }
            else if(str=="a()")
                cnt--;
            else if(str=="b()")
                cnt-=2;
            else if(str=="c()")
                cnt-=3;
            else if(str=="d()")
                cnt-=4;
            else if(str=="e()")
                cnt-=5;
            }
        else
        {
            if(str=="main()"){
                cnt+=3;
            }
            else if(str=="a()")
                cnt++;
            else if(str=="b()")
                cnt+=2;
            else if(str=="c()")
                cnt+=3;
            else if(str=="d()")
                cnt+=4;
            else if(str=="e()")
                cnt+=5;

        }
        if(cnt>100)
                ans=false;
    }
    if(ans)
        cout<<"success"<<endl;
    else
        cout<<"stack overflow"<<endl;
    return 0;
}