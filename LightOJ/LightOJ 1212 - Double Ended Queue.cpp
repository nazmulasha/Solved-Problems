#include <bits/stdc++.h>

using namespace std;
#define mx 99999999
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,m;
        cin>>n>>m;
        cout<<"Case "<<t<<":"<<endl;
        int x=0;
        int arr[250];
        for(int i=0;i<250;i++)
            arr[i]=mx;
        int i=100,j=100;
        while(m--)
        {
            string str;
            cin>>str;
            if(str=="popLeft")
            {

                if(x==0)
                    cout<<"The queue is empty"<<endl;
                else{
                    int tmp=arr[i];
                    arr[i]=mx;
                    if(tmp==mx){
                        tmp=arr[i+1];
                        arr[i+1]=mx;

                    }
                    i++;
                    cout<<"Popped from left: "<<tmp<<endl;
                    x--;
                }
            }
            else if(str=="popRight")
            {
                if(x==0)
                    cout<<"The queue is empty"<<endl;
                else{
                        int tmp=arr[j];
                        arr[j]=mx;
                    if(tmp==mx)
                    {
                        tmp=arr[j-1];

                        arr[j-1]=mx;
                    }
                        j--;
                    cout<<"Popped from right: "<<tmp<<endl;
                    x--;
                }
            }
            else if(str=="pushLeft")
            {
                int tmp;
                cin>>tmp;
                if(x==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    x++;
                    arr[i]=tmp;
                    i--;
                    cout<<"Pushed in left: "<<tmp<<endl;
                }
            }
            else
            {
                int tmp;
                cin>>tmp;
                if(x==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    x++;
                    j++;
                    arr[j]=tmp;
                    cout<<"Pushed in right: "<<tmp<<endl;
                }
            }
        }
    }

    return 0;
}
