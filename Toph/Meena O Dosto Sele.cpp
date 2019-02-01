#include <bits/stdc++.h>

using namespace std;
long long int work(unsigned long long int n,long long int cnt)
{
    if(n<=0)
        return 0;
    else if(n%2==0)
    {
        return cnt+work(n/2,cnt);
    }
    else
        return work(n/2,cnt+1);
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        unsigned long long n;
        cin>>n;
        if(work(n,0)%2==0)
            cout<<"Dipu"<<endl;
        else
            cout<<"Meena"<<endl;
    }
    return 0;
}
