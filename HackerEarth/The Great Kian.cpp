#include <iostream>
     
using namespace std;
     
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    long long int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=3)
        s1+=arr[i];
    for(int i=1;i<n;i+=3)
        s2+=arr[i];
    for(int i=2;i<n;i+=3)
        s3+=arr[i];
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    return 0;
}