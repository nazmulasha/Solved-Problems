#include <bits/stdc++.h>

using namespace std;
#define mx 1000002
int tree[3*mx];
int arr[mx];

int build(int node,int left,int right)
{
    if(left==right)
    {
        tree[node]=arr[left];
        return tree[node];
    }
    int mid=(left+right)/2;
    tree[node]=min(build(node*2,left,mid),build(node*2+1,mid+1,right));
    return tree[node];
}
int query(int node,int left,int right,int i,int j)
{
    if(left>=i&&right<=j)
        return tree[node];
    if(i>right||j<left)
        return INT_MAX;
    int mid=(left+right)/2;
    return min(query(node*2,left,mid,i,j),query(node*2+1,mid+1,right,i,j));
}
int main()
{
    int tt;
    scanf("%d",&tt);
    for(int t=1;t<=tt;t++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=0;i<=n+5;i++)
            tree[i]=INT_MAX;
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        }
        build(1,1,n);
        printf("Case %d:\n",t);
        while(q--)
        {
            int i,j;
            scanf("%d %d",&i,&j);
            int ans=query(1,1,n,i,j);
            printf("%d\n",ans);
        }
    }

    return 0;
}
