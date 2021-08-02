#include<bits/stdc++.h>

using namespace std;

void tc(vector<pair<int,string>>&s)
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i].first<<" "<<s[i].second<<endl;
    }
    s.push_back({5,"e"});
} 
int main()
{
    vector<pair<int,string>>a;
    vector<pair<int ,string>>::iterator it;
    a={{4,"d"},{2,"b"},{3,"c"},{1,"a"}};
    // swap(a[0],a[3]);
    sort(a.begin(),a.end());
    tc(a); 
    tc(a);
    cout<<"access pair value with iterator\n";
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    // iterator shortcut
    a.push_back({99,"allah"});
    for(auto itr=a.begin();itr!=a.end();++itr)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
