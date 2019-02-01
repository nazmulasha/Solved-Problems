    #include <bits/stdc++.h>
     
    using namespace std;
     
    bool comp(pair<float,string>p,pair<float,string>p2)
    {
        if(p.first==p2.first)
            return p.second<p2.second;
        return p.first>p2.first;
    }
     
    int main()
    {
     
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long int q,x;
        cin>>q>>x;
        int cnt=0;
        int ans=-1;
        stack<long long int>st;
        long long int sum=0;
        bool ss=false;
        while(q--)
        {
            string str;
            cin>>str;
            if(str=="Harry")
            {
                st.push(arr[cnt]);
                sum+=arr[cnt];
                cnt++;
                if(sum==x){
                    //cout<<st.top()<<endl;
                    if(!ss)
                    ans=st.size();
                    ss=true;
                }
     
            }
            else
            {
                if(!st.empty())
                {
                    sum-=st.top();
                    st.pop();
                }
            }
        }
        cout<<ans<<endl;
        return 0;
    }