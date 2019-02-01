#include <bits/stdc++.h>

using namespace std;
long long int mod=10007,c;
struct matrix{

    long long int arr[4][4];
    void clr()
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                arr[i][j]=0;
            }
        }
    }
};

matrix mul(matrix m1, matrix m2)
{
    matrix m;
    m.clr();
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                m.arr[i][j]+=m1.arr[i][k]*m2.arr[k][j];
                m.arr[i][j]%=mod;
            }
        }
    }
    return m;
}

matrix  expo(matrix m1,long long int n)
{
    matrix m;
    m.clr();
    m.arr[0][0]=0;
    m.arr[1][0]=0;
    m.arr[2][0]=0;
    m.arr[3][0]=c;

    while(n>0)
    {
        if(n&1)
            m=mul(m,m1);
        m1=mul(m1,m1);
        n>>=1;
    }
    return m;
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int a,b,n;
        cin>>n>>a>>b>>c;
        matrix m1;
        m1.clr();
        m1.arr[0][0]=a;
        m1.arr[0][2]=b;
        m1.arr[0][3]=1;
        m1.arr[1][0]=1;
        m1.arr[2][1]=1;
        m1.arr[3][3]=1;
        matrix res=expo(m1,n-2);
        long long ans=res.arr[3][3];
        ans%=mod;
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
