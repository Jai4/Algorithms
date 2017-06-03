#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef li::iterator it;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class monk
{
    ll n,m,u,v;ll ans=0;ll count=0;
    vll visited;
    li *united;
    public:
    void getinput()
    {
        cin>>n>>m;
        forn(i,0,n+1){visited.pb(0);}
        united=new li[n+1];
        while(m--)
        {
            cin>>u>>v;
            united[u].pb(v);
            united[v].pb(u);
        }
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                compute(i);
                ans=max(count/2,ans);
                count=0;
            }
        }
        cout<<ans;
        
    }
    void compute(ll k)
    {
        visited[k]=1;
        for(auto it=united[k].begin();it!=united[k].end();it++)
        {
            count+=1;
            if(visited[*it]==0)
            {
                compute(*it);
            }
        }
    }
};
int main()
{
    monk g;
    g.getinput();
    return 0;
}
Language: C++