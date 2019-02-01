#include <iostream>

using namespace std;

int main()
{
    int arr[8];
    bool st=true;
    cin>>arr[0]>>arr[1];
    int tmp=arr[0]-arr[1];
    for(int i=2;i<8;i++)
    {
        cin>>arr[i];
        if(arr[i-1]-arr[i]!=tmp)
            st=false;
    }
    if(st==false)
        cout<<"mixed"<<endl;
    else
    {
        if(arr[0]<arr[1])
            cout<<"ascending"<<endl;
        else
            cout<<"descending"<<endl;
    }
    return 0;
}
