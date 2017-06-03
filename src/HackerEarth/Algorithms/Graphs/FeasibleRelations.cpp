#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef string pt;
typedef list<ll> li;
typedef pair<ll,ll> pll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
class feasible
{
    ll n,k,T,u,v,q,w;ll tag=1;bool ty=false;
    vll visited,same;
    li *united;
    pt p;
    pll pr;
    vector<pll> temp;
  public:
  void getinput()
  {
      cin>>T;
      while(T--)
      {
          cin>>n>>k;
          forn(i,0,n+1){visited.pb(0);same.pb(0);}
          united=new li[n+1];
          while(k--)
          {
              cin>>u>>p>>v;
              if(p.size()==1)
              {
              united[u].pb(v);
              united[v].pb(u);
              }
              else
              {
                  temp.pb(mp(u,v));
              }
          }
          for(ll i=1;i<=n;i++)
          {
               if(visited[i]==0)
               {
                   compute(i,tag);
                   tag+=1;
               }
          }
          for(ll i=0;i<temp.size();i++)
          {
              pr=temp[i];q=pr.first;w=pr.second;
              if((same[q]!=0)&&(same[w]!=0))
              {
              
                  if(same[q]==same[w])
                  {
                      cout<<"NO"<<endl;
                      ty=true;
                  }
              }
          }
              if(ty==false)
              {
              cout<<"YES"<<endl;
              }
          ty=false;same.clear();visited.clear();tag=1;
          united->clear();temp.clear();
      }
  }
  void compute(ll r,ll tag)
  {
      same[r]=tag;visited[r]=1;
      for(auto itr=united[r].begin();itr!=united[r].end();itr++)
      {
          if(visited[*itr]==0)
          {
              compute(*itr,tag);
          }
      }
  }
};
int main()
{
    feasible g;
    g.getinput();
    return 0;
}