#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class shot
{
    ll n,hit,t,tem;ll k=0;
    vll united;
    ll count=0;
    bool b=true;
    public:
  void getinput()
  {
      cin>>n>>hit>>t;
      forn(i,0,n)
      {
          cin>>tem;
          united.pb(tem);
      }
      sort(united.begin(),united.end());
      while(b==true)
      {
          
          if(united[k]<=hit)
          {
              count+=1;//one is killed
              t=t-1;//one second is reduced
              k=k+1;
              if((k==united.size())||(t==0))
              {
                  b=false;
                  break;
              }
          }
          else
          {
              if(united[k]%hit==0)
              {
                 t=t-(united[k]/hit);
                  k=k+1;
                 if(t<0)
                 {
                     break;
                 }
                  if(t==0)
                  {
                      count+=1;//one has died
                      break;
                  }
                  count+=1;
                  if(k==united.size())
                   {
                      break;
                  }
              }
              else
              {
                  t=t-((united[k]/hit)+1);
                  k=k+1;
                  if(t<0)
                 {
                     break;
                 }
                  if(t==0)
                  {
                      count+=1;//one has died
                      break;
                  }
                  count+=1;
                  if(k==united.size())
                   {
                      break;
                  }
              }
          }
      }
      cout<<count<<endl;
  }
};


int main() {
    shot g;
    g.getinput();
    return 0;
}
