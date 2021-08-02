#include<bits/stdc++.h>

using namespace std;

void testcase()
{  
    long long n,ans;
    cin>>n;
    if(n%2)n++;
    if(n<6)ans=15;
    else ans=n*2.5;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
   {
      testcase();
   }
}