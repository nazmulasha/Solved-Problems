#include <bits/stdc++.h>

using namespace std;
vector<long long int>v;
unordered_map<long long int,long long int>mm;
void nod(long long int n)
{
    //int ans=1;

    for(long long int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            long long int tmp=n/i;
            if(tmp*tmp==n)
            {
               // if(mm[i]==0)
                    v.push_back(i);
                mm[i]++;
                tmp=n/i;
                while(tmp%i==0)
                {
                    mm[i]++;
                    tmp/=i;
                    if(mm[i]>2)
                        break;
                }
            }

            else
            {
              //  if(mm[i]==0)
                    v.push_back(i);
                mm[i]++;
                tmp=n/i;
                while(tmp%i==0)
                {
                    mm[i]++;
                    tmp/=i;
                    if(mm[i]>1)
                        break;
                }
               // if(mm[n/i]==0)
                    v.push_back(n/i);
                mm[n/i]++;

            }
        }
    }

}
int main()
{
    long long int n,m;
    cin>>n>>m;
    nod(m);

    //set<long long int>ss;

    unique(v.begin(),v.end());
    sort(v.begin(),v.end());
    if(v.size()==0&&m>1&&n>=m)
    {
        cout<<n-m<<" "<<1<<endl;
        return 0;
    }
    bool ok=true;
    for(int i=0;i<v.size();i++)
    {
        long long int num=v[i];
        if(num>n)
            break;
        if(m%num!=0)
            continue;
        m/=num;
        n-=num;
        if(mm[num]>1)
        {
            ok=false;
            break;
        }

    }

    cout<<n<<" "<<m<<endl;
    return 0;
}
