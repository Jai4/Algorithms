#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class universe
{
   public:
   void getinput()
   {
      ll tem;bool b=true;
      while(b==true)
      {
        cin>>tem;
        if(tem!=42)
        {
        cout<<tem<<endl;
        }
        else
        {
            b=false;
        }
      }
   }
};
int main()
{
universe g;
g.getinput();
return 0;
}