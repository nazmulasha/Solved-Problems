#include <bits/stdc++.h>

using namespace std;


int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
        char c;
        if(i!=3&&i!=7)
           cin>>c;
    }
    for(int i=4;i<8;i++)
    {
        int tmp=arr[i];
        //cout<<tmp<<endl;
        int j=0;
        int sum=0;
        while(tmp)
        {
            int x=tmp%2;
            sum+=(x*pow(2,j));
            tmp/=10;
            j++;
           // cout<<sum<<endl;
        }
       // cout<<sum<<endl;
        arr[i]=sum;
    }
    bool ss=true;
    for(int i=0;i<4;i++)
    {
        if(arr[i]!=arr[i+4])
        {
            //cout<<arr[i]<<" "<<arr[i+3]<<endl;
            ss=false;
            break;
        }
    }
    if(ss)
        cout<<"Case "<<t<<": Yes"<<endl;
    else
        cout<<"Case "<<t<<": No"<<endl;
    }
    return 0;

}
