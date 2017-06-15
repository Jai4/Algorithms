#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef priority_queue<pll, vector<pll>, greater<pll>> qpll;
typedef list<pll> lpll;
#define mp make_pair
#define pb  push_back
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class shortest
{
    ll q,u,v,s,n,m;
    pll pr;
    qpll pj;
    lpll *united;
    vll process,distance;
  public:
    void getinput()
    {
        cin>>q;
        while(q--)
        {
           cin>>n>>m;
           united=new lpll[n+1];
           forn(i,0,n+1)
           {
               process.pb(0);
               distance.pb(1000000000);
           }
           forn(i,0,m)
           {
               cin>>u>>v;
               united[u].pb(mp(v,6));
               united[v].pb(mp(u,6));
           }
            cin>>s;
            distance[s]=0;
            pj.push(mp(0,s));
            while(pj.empty()==false)
            {
                pr=pj.top();pj.pop();
                compute();
            }
            forn(i,1,n+1)
            {
                if(i!=s){
                if(distance[i]!=1000000000)
                {
                    cout<<distance[i]<<" ";
                }
                else
                {
                    cout<<-1<<" ";
                }
                }
            }
            distance.clear();process.clear();united->clear();
            cout<<endl;
        }
    }
    void compute()
    {
        process[pr.second]=1;
        for(auto it=united[pr.second].begin();it!=united[pr.second].end();it++)
        {
            if(process[it->first]==0)
            {
                if(distance[it->first]>distance[pr.second]+it->second)
                {
                    distance[it->first]=distance[pr.second]+it->second;
                    pj.push(mp(distance[it->first],it->first));
                }
            }
        }
    }
};

int main() {
    shortest g;
    g.getinput();
    return 0;
}
