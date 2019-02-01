#include <bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        int n;
        cin>>n;
        map<string,map<int,int> >m;
        int arr[6];
        set<string>s[6];
        memset(arr,0,sizeof(arr));
        while(n--)
        {
            string str;
            int p;
            cin>>p>>str;
            for(int i=0;i<p;i++)
            {
                int tmp;
                cin>>tmp;
                s[tmp].insert(str);
 
            }
        }
    
        for(int i=1;i<6;i++)
        {
            if(s[i].empty())
            cout<<"UNDEFINED"<<endl;
            else if(s[i].size()<2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        return 0;
    }