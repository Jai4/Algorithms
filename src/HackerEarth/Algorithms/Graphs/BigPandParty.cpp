#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef queue<pll> qpll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class bigp
{
    ll A,B,u,v;
    li *united;
    vll visited,lucky;
    qpll pj;
    pll ty;
  public:
  void getinput()
  {
      cin>>A>>B;
      united=new li[A];
      forn(i,0,A){visited.pb(-1);lucky.pb(-1);}
      lucky[0]=0;
      while(B--)
      {
          cin>>u>>v;
          united[u].pb(v);
          united[v].pb(u);
      }
      pj.push(mp(0,0));
      while(pj.empty()==false)
      {
         ty= pj.front();pj.pop();
         compute();
      }
      forn(i,1,lucky.size())
      {
          cout<<lucky[i]<<endl;
      }
      
  }
  void compute()
  {
      visited[ty.first]=1;
      for(auto it=united[ty.first].begin();it!=united[ty.first].end();it++)
      {
          if(visited[*it]==-1)
          {
              visited[*it]=1;
              lucky[*it]=ty.second+1;
              pj.push(mp(*it,ty.second+1));
          }
      }
  }
};
int main()
{
    bigp g;
    g.getinput();
    return 0;
}