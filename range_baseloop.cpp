#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int >v={1,23,4};
    for(int value: v)
    {
        cout<<value<<" ";
    }
    cout<<"\nvector pair\n";
    vector<pair<int,int>>vp={{1,2},{3,4},{4,5}};
    // for(pair<int,int> value: vp)
    for(auto &value:vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}