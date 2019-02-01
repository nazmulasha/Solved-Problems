#include <bits/stdc++.h>

using namespace std;
#define mx 100002
long long int tree[4*mx];
long long int prop[4*mx];

void update(int node,int left,int right,int i,int j,int v)
{
    if(i>right||j<left)
        return;
    if(left>=i&&right<=j)
    {
        prop[node]+=v;
    }
    else
    {
        int mid=(left+right)/2;
        tree[node]+=v*(min(j,right)-max(i,left)+1);
        update(2*node,left,mid,i,j,v);
        update(2*node+1,mid+1,right,i,j,v);
    }
}
long long int query(int node,int left,int right,int i,int j)
{
    if(i>right||j<left)
        return 0;
    tree[node]+=prop[node]*(right-left+1);
    if(left!=right)
    {
        prop[2*node]+=prop[node];
        prop[2*node+1]+=prop[node];
    }
    prop[node]=0;
    int mid=(right+left)/2;
    if(left>=i&&right<=j)
        return tree[node];
    else
        return query(2*node,left,mid,i,j)+query(2*node+1,mid+1,right,i,j);
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
        memset(prop,0,sizeof(prop));
        printf("Case %d:\n",t);
        while(q--)
        {
            int a;
            scanf("%d",&a);
            if(a==0)
            {
                int i,j,v;
                scanf("%d %d %d",&i,&j,&v);
                update(1,0,n-1,i,j,v);
            }
            else
            {
                int i,j;
                scanf("%d %d",&i,&j);
                long long int ans=query(1,0,n-1,i,j);
                printf("%lld\n",ans);
            }
        }
    }

    return 0;
}
