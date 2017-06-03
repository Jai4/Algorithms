#include <iostream>
using namespace std;
typedef string s;
typedef long long ll;
typedef char c;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class consecutive{
    s st;s as;ll T;c ct;
  public:
  void getinp()
  {
      cin>>T;
      forn(i,0,T)
      {
      compute();
      }
  }
  void compute()
  {
      cin>>st;
      ct=st.at(0);
      as=as+ct;
      forn(i,1,st.length())
      {
         if(ct!=st.at(i))
         {
             as=as+st.at(i);
             ct=st.at(i);
         }
      }
      cout<<as<<endl;
      as.clear();st.clear();
  }
  
};
 
int main()
{
    consecutive g;
    g.getinp();
    return 0;
}
Language: C++