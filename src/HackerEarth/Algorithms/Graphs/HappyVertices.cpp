#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef li::iterator it;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class vertices
{
    ll N,M,U,V,a,b;
    vll parent,visited,count;
    li *united;it itr;
    ll ans=0;
  public:
  void getinput()
  {
      cin>>N>>M;
      united = new li[N+1];
      forn(i,0,N+1){parent.pb(i);visited.pb(0);count.pb(0);}
      while(M--)
      {
          cin>>U>>V;
          united[U].pb(V);
          united[V].pb(U);
      }
      for(int i=1;i<=N;i++)
      {
          if(visited[i]==0)
          {
              compute(i);
          }
      }
      for(int i=1;i<=N;i++)
      {
          a=count[parent[i]];
          b=count[i];
          if(b>a)
          {
              ans+=1;
          }
      }
      cout<<ans;
  }
  void compute(ll k)
  {
      visited[k]=1;
      for(auto itr=united[k].begin();itr!=united[k].end();itr++)
      {
          if(visited[*itr]==0)
          {
          parent[*itr]=k;
          count[k]=count[k]+1;
          compute(*itr);
          }
      }
  }
};
int main()
{
    vertices g;
    g.getinput();
    return 0;
}