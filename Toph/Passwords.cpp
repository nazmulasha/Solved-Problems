#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int sum=0;
        int x=0,y=0,z=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>=65&&str[i]<=90)
                x++;
            else if(str[i]>=97&&str[i]<=122)
                y++;
            else if(str[i]>=48&&str[i]<=57)
                z++;
            if(x>0&&y>0&&z>0)
            {
                sum++;
                x=0;
                y=0;
                z=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}