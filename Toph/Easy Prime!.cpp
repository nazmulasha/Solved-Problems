#include <bits/stdc++.h>

using namespace std;
#define mx 100001
int arr[mx];
#define mxx 10000003
bool prime[mxx];
void work()
{
    for(int i=0;i<mxx;i++)
        prime[i]=1;
    prime[1]=0;
    prime[2]=1;
    for(int i=3;i<=sqrt(mxx);i+=2)
    {
        if(prime[i])
        {
            for(int j=i+i;j<mxx;j+=i)
                prime[j]=0;
        }
    }
    for(int i=4;i<mx;i+=2)
        prime[i]=0;
}
struct info {
    long long int prop, sum;
} tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].sum = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}
void update(int node, int b, int e, int i, int j, long long int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;

}
int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);
    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;
    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);
    return p1 + p2;
}

int main()
{
    work();
    int n,m;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(prime[ar[i]])
            arr[i]=1;
        else
            arr[i]=0;
    }
    init(1,1,n);
    cin>>m;
    while(m--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1)
            cout<<query(1,1,n,y,z,0)<<endl;
        else
        {
            if(prime[ar[y]])
            {
                if(!prime[z])
                    update(1,1,n,y,y,-1);
                ar[y]=z;
            }
            else
            {
                if(prime[z])
                    update(1,1,n,y,y,1);
                ar[y]=z;
            }
        }
    }

    return 0;
}