#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int n,m;
    cin>>n>>m;
    string a,b,c,d;
    vector<pair<string,string>>p;
    while(n--)
    {
        cin>>a>>b;
        p.push_back(make_pair(a,b));
    }
    while(m--)
    {
        cin>>c>>d;
        d.pop_back();
        for(auto k:p)
        {
            if(k.second==d)
            {
                cout<<c<<" "<<d<<";"<<" "<<"#"<<k.first<<endl;
            }
        }
    }
    return 0;
}
