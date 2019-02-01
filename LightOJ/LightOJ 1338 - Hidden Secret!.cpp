#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    scanf("%d",&tt);
    getchar();
    for(int t=1;t<=tt;t++)
    {
        char str[105],str2[105];
        gets(str);
        //getchar();
        gets(str2);
       // getchar();
        int arr[26],arr2[26];
        memset(arr,0,sizeof(arr));
        memset(arr2,0,sizeof(arr2));
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                arr[str[i]-'A']++;
            else if(str[i]>='a'&&str[i]<='z')
                arr[str[i]-'a']++;
        }
        for(int i=0;i<strlen(str2);i++)
        {
            if(str2[i]>='A'&&str2[i]<='Z')
                arr2[str2[i]-'A']++;
            else if(str2[i]>='a'&&str2[i]<='z')
                arr2[str2[i]-'a']++;
        }
        bool ss=true;
        for(int i=0;i<26;i++)
        {
            //cout<<arr[i]<<" "<<arr2[i]<<endl;
            if(arr2[i]<arr[i])
            {
              //  cout<<i<<endl;
              //  cout<<arr[i]<<" "<<arr2[i]<<endl;
                ss=false;
                break;
            }
        }
        if(ss)
            printf("Case %d: Yes\n",t);
        else
            printf("Case %d: No\n",t);
    }
    return 0;
}
