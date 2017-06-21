#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class pathe
{
    ll n,m,x,y;
    ll count;
    bool b=false;
    vll visited;
    li *united;
  public:
  void getinput()
  {
      cin>>n>>m;
      united=new li[n+1];
      while(m--)
      {
          cin>>x>>y;
          united[x].pb(y);
          united[y].pb(x);
      }
      forn(i,0,n)
      {
          count=0;
          if(b==false)
          {
              forn(i,0,n)
              {
                  visited.pb(0);
              }
          compute(i);
          }
          else
          {
              break;
          }
          visited.clear();
      }
      if(b==false)
      {
          cout<<"NO"<<endl;
      }
  }
  void compute(ll k)
  {
      visited[k]=1;
      count+=1;
      if(count==n)
      {
          cout<<"YES"<<endl;
          b=true;
          return;
      }
      for(auto it=united[k].begin();it!=united[k].end();it++)
      {
          if(b==false)
          {
              if(visited[*it]==0)
              {
                  compute(*it);
              }
          }
          else
          {
              break;
          }
      }
      count=count-1;
  }
};
int main()
{
    pathe g;
    g.getinput();
    return 0;
}
