#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef stack<ll> sll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class special
{
    ll n,m,u,v,count,w;
    sll fi;
    vll visited,visitedr,ans;
    li *united;li *unitedr;
    
    public:
    void getinput()
    {
        cin>>n>>m;
        forn(i,0,n+1)
        {
            visited.pb(0);
            visitedr.pb(0);
            ans.pb(0);
        }
        united=new li[n+1];
        unitedr=new li[n+1];
        forn(i,0,m)
        {
            cin>>u>>v;
            united[u].pb(v);
            unitedr[v].pb(u);
        }
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                compute(i);
            }
        }
        while(fi.empty()==false)
        {
            w=fi.top();fi.pop();
            if(visitedr[w]==0)
            {
            count=0;
            computer(w);
                if(count==1)
                {
                    ans[w]=0;
                }
            }
        }
        for(ll i=1;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        
    }
    void computer(ll k)
    {
        visitedr[k]=1;
        count=count+1;
        for(auto it=unitedr[k].begin();it!=unitedr[k].end();it++)
        {
            if(visitedr[*it]==0)
            {
                visitedr[*it]=1;
                ans[*it]=1;
                computer(*it);
            }
        }
       ans[k]=1;
    }
    void compute(ll k)
    {
        visited[k]=1;
        for(auto it=united[k].begin();it!=united[k].end();it++)
        {
            if(visited[*it]==0)
            {
                visited[*it]=1;
                compute(*it);
            }
        }
        fi.push(k);
    }
};
int main()
{
    special g;
    g.getinput();
    return 0;
}