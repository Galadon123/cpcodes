#include<bits/stdc++.h>

using namespace std;

void testcase()
{  
   double W,H,lwp,lhp,hwp,hhp,hg,wg,rw,rh,ans,ans1=100000001,ans2=100000001;
   cin>>W>>H>>lwp>>lhp>>hwp>>hhp>>rw>>rh;
   hg=H-hhp;wg=W-hwp;
   if( lwp>=rw || lhp >=rh|| hg>=rh || wg>=rw )ans=0;
   else
   {
    if(hg+lhp>=rh || wg+lwp>=rw)
      {
      if(hg+lhp>=rh)
        {
            ans1=rh-lhp;  
        }
      if(wg+lwp>=rw)
        {
            ans2=rw-lwp;    
        }
        ans=min(ans1,ans2);
      }
        else ans=-1;
   }
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