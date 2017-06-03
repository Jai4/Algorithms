#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef pair<ll,ll> pll;
typedef queue<pll> qpll;
typedef set<ll> sll;
typedef sll::iterator tr;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define mp make_pair
#define pb push_back
class bishu
{
   ll n,u,v,g,tem,previous;bool b=false;
   li *united;
   vll girlfriend,visited;
   sll pj;tr ttr;
   qpll jp;
   pll r;
    public:
    void getinput()
    {
        cin>>n;
        united=new li[n+1];
        girlfriend.pb(0);visited.pb(0);
        forn(i,1,n){girlfriend.pb(0);visited.pb(0);}
        forn(i,1,n-1)
        {
            cin>>u>>v;
            united[u].pb(v);
            united[v].pb(u);
        }
        cin>>g;
        forn(i,1,g)
        {
            cin>>tem;
            girlfriend[tem]=1;
        }
        jp.push(mp(1,0));
        while(jp.empty()==false)
        {
           r=jp.front();jp.pop();
           if(r.second!=previous)
           {
               if(pj.empty()==false)
               {
               ttr=pj.begin();
               cout<<*ttr<<endl;
               return;
               }
           }
           visited[r.first]=1;
           compute();
           
        }
    }
    void compute()
    {
        previous=r.second;
        for(auto it=united[r.first].begin();it!=united[r.first].end();it++)
        {
            if(visited[*it]==0)
            {
                if(girlfriend[*it]==1)
                {
                    pj.insert(*it);
                }
            jp.push(mp(*it,r.second+1));
            visited[*it]=1;
            }
        }
    }
};
int main()
{
    bishu g;
    g.getinput();
    return 0;
}