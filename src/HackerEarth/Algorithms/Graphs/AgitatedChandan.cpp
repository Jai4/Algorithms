#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef list<pll> lpll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef queue<pll> qpll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class agitated
{
    ll T,n,a,b,w,max,node;
    pll pr;
    vll p1,p2;
    qpll q;
    lpll *u1;
  public:
  void getinput()
  {
      std::ios_base::sync_with_stdio(false);
      cin>>T;
      while(T--)
      {
          cin>>n;
          forn(i,0,n+1){p1.pb(0);p2.pb(0);}
          u1=new lpll[n+1];
          forn(i,0,n-1)
          {
              cin>>a>>b>>w;
              u1[a].pb(mp(b,w));
              u1[b].pb(mp(a,w));
          }
          q.push(mp(1,0));
          max=-1;node=1;
          while(q.empty()==false)
          {
              pr=q.front();q.pop();
              if(pr.second>max)
              {
                  max=pr.second;node=pr.first;
              }
              compute();
          }
          q.push(mp(node,0));max=-1;
          while(q.empty()==false)
          {
              pr=q.front();q.pop();
              if(pr.second>max)
              {
                  max=pr.second;node=pr.first;
              }
              compute1();
          }
          if(max<100)
          {
          cout<<0<<" "<<max<<endl;
          }
          else if((max>100)&&(max<1000))
          {
              cout<<100<<" "<<max<<endl;
          }
          else if((max>1000)&&(max<10000))
          {
              cout<<1000<<" "<<max<<endl;
          }
          else
          {
              cout<<10000<<" "<<max<<endl;
          }
          
          p1.clear();p2.clear();u1->clear();
      }
  }
  void compute()
  {
      p1[pr.first]=1;
      for(auto it=u1[pr.first].begin();it!=u1[pr.first].end();it++)
      {
          if(p1[it->first]==0)
          {
              q.push(mp(it->first,pr.second+it->second));
              p1[it->first]=1;
          }
      }
  }
  void compute1()
  {
      p2[pr.first]=1;
      for(auto it=u1[pr.first].begin();it!=u1[pr.first].end();it++)
      {
          if(p2[it->first]==0)
          {
              q.push(mp(it->first,pr.second+it->second));
              p2[it->first]=1;
          }
      }
  }
  
};
int main()
{
    agitated g;
    g.getinput();
    return 0;
}
Language: C++