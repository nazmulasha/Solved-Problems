#include <bits/stdc++.h>

using namespace std;
#define mx 1000002
int tree[3*mx];
int arr[mx];
long long int ans;
int build(int node,int left,int right)
{
    if(left==right)
    {
        tree[node]=arr[left];
        return tree[node];
    }
    int mid=(left+right)/2;
    tree[node]=build(node*2,left,mid)+build(node*2+1,mid+1,right);
    return tree[node];
}
int query(int node,int left,int right,int i,int j)
{
    if(i>right||j<left)
        return 0;
    if(left>=i&&right<=j)
        return tree[node];
    int mid=(left+right)/2;
    return query(node*2,left,mid,i,j)+query(node*2+1,mid+1,right,i,j);
}

void up1(int node,int left,int right,int i)
{
    if(i>right||i<left)
        return;
    if(left==i&&right==i)
    {
        ans=tree[node];
        tree[node]=0;
        return;
    }

    int mid=(left+right)/2;
    up1(node*2,left,mid,i);
    up1(node*2+1,mid+1,right,i);
    tree[node]=tree[node*2]+tree[node*2+1];
}
void up2(int node,int left,int right,int i,int v)
{
    if(i>right||i<left)
        return;
    if(left==right)
    {
        tree[node]+=v;
        return;
    }
    int mid=(left+right)/2;
    up2(node*2,left,mid,i,v);
    up2(node*2+1,mid+1,right,i,v);
    tree[node]=tree[node*2]+tree[node*2+1];
}
int main()
{
    int tt;
    scanf("%d",&tt);
    for(int t=1;t<=tt;t++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        memset(tree,0,sizeof(tree));
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        build(1,0,n-1);
        printf("Case %d:\n",t);
        while(q--)
        {
            int a;
            scanf("%d",&a);
            if(a==1)
            {
                int i;
                scanf("%d",&i);
                up1(1,0,n-1,i);
                printf("%d\n",ans);
            }
            else if(a==2)
            {
                int i,v;
                scanf("%d %d",&i,&v);
                up2(1,0,n-1,i,v);
            }
            else
            {
                int i,j;
                scanf("%d %d",&i,&j);
                long long int ans=query(1,0,n-1,i,j);
                printf("%d\n",ans);
            }

        }
    }

    return 0;
}
