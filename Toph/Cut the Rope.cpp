#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<long long int,long long int>,null_type,less< pair<long long int,long long int> >,rb_tree_tag,tree_order_statistics_node_update>treap;
using namespace __gnu_cxx;
treap tr;

int main(){

    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        long long int n,q;
        cin>>n>>q;

        //tr.insert(0);
        tr.insert({n,0});
        set<long long int>ss;
        ss.insert(0);
        ss.insert(n);
        cout<<"Case "<<t<<":"<<endl;
        while(q--)
        {
            char c;
            long long int x;
            cin>>c>>x;
            if(c=='C')
            {
                auto it=ss.lower_bound(x);
                long long int ls,gr;
                gr=*it;
                it--;
                ls=*it;
                //cout<<gr<<" "<<ls<<endl;
                tr.erase({gr-ls,ls});
                tr.insert({x-ls,ls});
                tr.insert({gr-x,x});
                ss.insert(x);
            }
            else
            {
                pair<long long int,long long int> it=*tr.find_by_order(x-1);
                long long int nn=it.first;
                cout<<nn<<endl;
            }
        }
        tr.clear();

    }



    return 0;
}