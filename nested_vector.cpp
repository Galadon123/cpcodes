#include<bits/stdc++.h>

using namespace std;

void tc(vector<int> &s)
{
   cout<<"size: "<<s.size()<<endl;
   for(int i=0;i<s.size();i++)
   { 
       cout<<s[i]<<" ";
   }
   cout<<endl;
}
int main()
{
    vector<vector<int>>v;
    int row;cin>>row;
    for(int i=0;i<row;i++)
    {
        int col;cin>>col;
        vector<int>temp;
        for(int j=0;j<col;j++)
         {
             int x;cin>>x;
             temp.push_back(x);
         }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
      tc(v[i]);
    }  
}