#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first>p2.first)
        return true;
    else if(p1.first==p2.first)
        return p1.second>p2.second;

}

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x1,y1,x2,y2,r,x3,y3,rr;
        cin>>x1>>y1>>x2>>y2>>r;
        x3=min(x1,x2)+abs(x1-x2)/2;
        y3=min(y1,y2)+abs(y1-y2)/2;
        rr=sqrt(abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2))/2+r;
        cout<<fixed<<setprecision(2);
        cout<<x3<<" "<<y3<<" "<<rr<<endl;
    }
    return 0;
}

