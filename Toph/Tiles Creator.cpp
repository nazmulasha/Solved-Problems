#include <bits/stdc++.h>

using namespace std;
#define mx 10005
bool ispr[mx];
void sieve()
{
    for(int i=0;i<mx;i++)
        ispr[i]=true;
    ispr[0]=false;
    ispr[1]=false;
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(ispr[i])
        {
            for(int j=i+i;j<mx;j+=i)
                ispr[j]=false;
        }
    }
    for(int i=4;i<mx;i+=2)
        ispr[i]=false;
}


int main()
{
  //  freopen("out.txt","w",stdout);
    sieve();
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int ans=0;
        if(min(a,b)==0)
            cout<<"Area cannot be covered. :|"<<endl;
        else
        {

            while(min(a,b)>1)
            {
                if(a>b)
                    swap(a,b);
                int tt=b/a;
                cout<<a<<" x "<<a<<" tiles required "<<tt<<endl;
                ans+=tt;
                b=b-(tt*a);
            }
            if(a>b)
                swap(a,b);
            if(a>0)
                cout<<"1 x 1 tiles required "<<b<<endl,ans+=b;
            if(ans==1)
                cout<<"In total minimum "<<ans<<" tile required. ";
            else
                cout<<"In total minimum "<<ans<<" tiles required. ";
            if(ispr[ans])
                cout<<":)"<<endl;
            else
                cout<<":("<<endl;
        }
    }
    return 0;
}