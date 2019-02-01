#include <bits/stdc++.h>

using namespace std;
#define mx 10000003
bool prime[mx];
int arr[mx];
void work()
{
    for(int i=0;i<mx;i++)
        prime[i]=1;
    prime[1]=0;
    prime[2]=1;
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        if(prime[i])
        {
            for(int j=i+i;j<mx;j+=i)
                prime[j]=0;
        }
    }
    for(int i=4;i<mx;i+=2)
        prime[i]=0;
    arr[1]=0;
    int cnt=0;
    for(int i=2;i<mx;i++)
    {
        arr[i]=cnt;
        if(prime[i])
            cnt++;
    }
}
int main()
{
    work();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
