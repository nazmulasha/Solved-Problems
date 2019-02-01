#include <bits/stdc++.h>

using namespace std;
char str[1001];
struct suffix
{
    int index;
    char *suff;
};

int cmp(struct suffix a, struct suffix b)
{
    return strcmp(a.suff, b.suff) < 0? 1 : 0;
}

int *buildSuffixArray(char *txt, int n)
{
    struct suffix suffixes[n];
    for (int i = 0; i < n; i++)
    {
        suffixes[i].index = i;
        suffixes[i].suff = (txt+i);
    }
    sort(suffixes, suffixes+n, cmp);
    int *suffixArr = new int[n];
    for (int i = 0; i < n; i++)
        suffixArr[i] = suffixes[i].index;
    return  suffixArr;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&str);
        int n=strlen(str);
        int *suffixArr=buildSuffixArray(str,n);
        int q;
        scanf("%d",&q);
        int dp[n+5];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            int arr[27];
            memset(arr,0,sizeof(arr));
            for(int j=i;j<n;j++)
            {
                arr[str[j]-'a']=1;
            }
            int cnt=0;
            for(int j=0;j<27;j++)
                cnt+=arr[j];
            dp[i]=cnt;
        }
        while(q--)
        {
            int p;
            scanf("%d",&p);
            int ans=dp[suffixArr[p-1]];
            printf("%d\n",ans);
        }
    }
    return 0;
}
