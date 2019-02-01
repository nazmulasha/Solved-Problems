#include <bits/stdc++.h>

using namespace std;
#define max 9602444

int flag[max];

#define on(x) (flag[x/64]&(1<<((x%64)/2)))
#define mark(x) flag[x/64] |=(1<<((x%64)/2))
long long int a[800][800];
vector<long long int>primes;
void sieve()
{
    for(long long int i=3;i<=sqrt(max);i+=2)
    {
        if(!on(i))
        {
        for(long long int j=i*i;j<max;j+=i<<1)
        {
            mark(j);
        }
        }
    }
    primes.push_back(2);
    for(long long int i=3;i<max;i+=2)
    {
        if(!on(i))
        {
            primes.push_back(i);
        }

    }
}
void sp(int m, int n)
{
    int i, k = 0, l = 0,pri=0;
    int mm=m,nn=n;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            a[k][i]=primes[pri];
            pri++;
        }
        k++;
        for (i = k; i < m; ++i)
        {
            a[i][n-1]=primes[pri];
            pri++;
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                a[m-1][i]=primes[pri];
                pri++;;
            }
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                a[i][l]=primes[pri];
                pri++;
            }
            l++;
        }
    }
    for(int i=0;i<mm;i++)
    {
        for(int j=0;j<nn;j++)
        {
            cout<<a[i][j];
            if(j<nn-1)
                cout<<" ";
        }
        cout<<endl;
    }
    //cout<<endl;
}


int main()
{
    sieve();
    int n;
    cin>>n;
    sp(n,n);
    return 0;
}