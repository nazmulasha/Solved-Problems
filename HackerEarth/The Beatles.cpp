    #include <iostream>
     
    using namespace std;
     
    long long int gcd(long long int a,long long int b) {
      if (b == 0) return a;
      return gcd(b, a%b);
    }
     
     
    int main()
    {
        int n;
        cin>>n;
        long long int mx=99999999999999999;
        int in;
        long long int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
        {
            long long int a=1;
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                a=a*arr[j]/gcd(a,arr[j]);
            }
            if(a<mx)
            {
               // cout<<i<<" "<<a<<endl;
                mx=a;
                in=i;
            }
        }
        cout<<in<<endl;
        return 0;
    }