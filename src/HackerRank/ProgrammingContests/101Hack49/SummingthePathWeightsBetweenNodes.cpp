#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef list<pll> li;
const ll N=1e5+10;
ll c[N][2];
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define mp make_pair
#define pb push_back
class sumpath
{
    ll tem,n,u,v,w,p0=0,p1=0,ans=0;
    ll *a;
    li *united;
    pll pr;
  public:
    void compute(ll u,ll p)
    {
        
        c[u][a[u]]++;
        for(auto it=united[u].begin();it!=united[u].end();it++)
        {
            pr=*it;
            int v=pr.first;
            int w=pr.second;
            if(v!=p)
            {
                compute(v,u);
                c[u][0] += c[v][0];
                c[u][1] += c[v][1];
                ll pj=0;
                pj += (c[v][0] * (p1-c[v][1]));
                pj += (c[v][1] * (p0-c[v][0]));
                ans += pj * w;
            }
        }
    }
    void getinput()
    {
        cin>>n;
        a=new ll[n+1];
        united=new li[n+1];
        forn(i,1,n)
        {
            cin>>tem;
            a[i]=tem;
        }
        forn(i,1,n-1)
        {
            cin>>u>>v>>w;
            united[u].pb(mp(v,w));
            united[v].pb(mp(u,w));
        }
        forn(i,1,n)
        {
            if(a[i]==0)
            {
                p0++;
            }
            else
            {
                p1++;
            }
        }
        
        compute(1,-1);
        cout<<ans<<endl;
    }

};

int main() {
    sumpath g;
    g.getinput();
    return 0;
}
