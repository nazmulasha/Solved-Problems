    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string str;
        cin>>str;
        int k;
        cin>>k;
        int cnt=0;
        for(int i=0;i<str.size();i++)
        {
            if(cnt==k)
                break;
            if(str[i]!='9')
            {
                str[i]='9';
                cnt++;
            }
            
        }
        cout<<str<<endl;
     
        return 0;
    }