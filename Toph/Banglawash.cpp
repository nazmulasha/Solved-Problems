#include <bits/stdc++.h>

using namespace std;

struct match{

   int run;
   int point;
   int wic;
   string name;

};
bool comp(match m1,match m2)
{
    if(m1.point==m2.point&&m1.run==m2.run&&m1.wic==m2.wic)
        return m1.name<m2.name;
    else if(m1.point==m2.point&&m1.run==m2.run)
        return m1.wic>m2.wic;
    else if(m1.point==m2.point)
        return m1.run>m2.run;

    return m1.point>m2.point;

}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<match>v;
        for(int i=0;i<n;i++)
        {
            getchar();
        string str;
        getline(cin,str);
        int r,w;
        cin>>r>>w;
        int p=0;
        if(r>0&&r<100)
            p=1;
        else if(r>99&&r<200)
            p=2;
        else if(r>199&&r<300)
            p=3;
        else if(r>299&&r<400)
            p=4;
        else if(r>399)
            p=5;
        if(w>0&&w<4)
            p+=1;
        else if(w>3&&w<7)
            p+=2;
        else if(w>6&&w<9)
            p+=3;
        else if(w>8&&w<11)
            p+=4;
        else if(w>10)
            p+=5;
        match mat;
        mat.name=str;
        mat.run=r;
        mat.point=p;
        mat.wic=w;
        v.push_back(mat);
    }
    sort(v.begin(),v.end(),comp);
    cout<<v[0].name<<" "<<v[0].point<<" points"<<endl;
    v.clear();
    }
    return 0;
}