#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cstdio>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
    string s1,s2;
    bool st=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
            st=true;
            continue;
        }
        if(!st)
        {
            s1+=str[i];
        }
        else
            s2+=str[i];

    }
    int a[3],b[3];
    str="";
    int j =0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='.')
        {
            a[j]=atoi(str.c_str());
            str="";
            j++;
        }
        else
            str+=s1[i];
    }
   a[j]=atoi(str.c_str());
    str="";
    j++;
    int k=0;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]=='.')
        {
            b[k]=atoi(str.c_str());
            str="";
            k++;
        }
        else
            str+=s2[i];
    }
    b[k]=atoi(str.c_str());
            str="";
            k++;
    string fs="";
    if(s1==s2)
        fs=s1;
    if(j==k){
    int i=0;
    while(i!=k)
    {
        if(a[i]>b[i])
        {
            fs=s1;
            break;
        }
        else if(b[i]>a[i])
        {
            fs=s2;
            break;
        }
        i++;
    }
    }
    else
    {
        if(j<k)
        {
            bool sa=true;
            for(int i=0;i<j;i++)
            {
                if(a[i]>b[i])
                 {
                 fs=s1;
                 sa=false;
                 break;
                  }
             else if(b[i]>a[i])
              {
              fs=s2;
              sa=false;
               break;
              }
            }
            if(sa)
                fs=s2;
        }
        else
        {
            bool sa=true;
            for(int i=0;i<k;i++)
            {
                if(a[i]>b[i])
                 {
                 fs=s1;
                 sa=false;
                 break;
                  }
             else if(b[i]>a[i])
              {
              fs=s2;
              sa=false;
               break;
              }
            }
            if(sa)
                fs=s1;
        }
    }
    cout<<fs<<endl;
    }
    return 0;
}
