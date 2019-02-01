#include <iostream>
#include <vector>
#include <cstring>
#include <stdlib.h>
using namespace std;

vector<int> v;
#define M 100000007
int k;
long long int coin[10001];
void work()
{
    coin[0]=1;
    for(int i=0;i<v.size();i++)
    {
        for(int j=v[i];j<=k;j++)
        {
            coin[j]=(coin[j]%M)+(coin[j-v[i]]%M);
           // coin[j]+=coin[j-v[i]];
        }
    }
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n>>k;
     //   vector<int> v;

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }
        work();
        cout<<"Case "<<t<<": "<<coin[k]%M<<endl;
        v.clear();
        memset(coin, 0, sizeof(coin));
    }
    return 0;
}
