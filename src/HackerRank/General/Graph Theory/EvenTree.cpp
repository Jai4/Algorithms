#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class eventree
{
    ll n,m,x,y;
    li *united;
    vll visited;
    ll ans=0;
    public:
    void getinput()
    {
        cin>>n>>m;
        united=new li[n+1];
        visited.pb(0);
        forn(i,0,n)
        {
            visited.pb(0);
        }
        while(m--)
        {
            cin>>x>>y;
            united[x].pb(y);
            united[y].pb(x);
        }
        compute(1);
        cout<<ans<<endl;
    }
    ll compute(ll k)
    {
        visited[k]=1;
        int p1=0;
        for(auto it=united[k].begin();it!=united[k].end();it++)
        {
            if(visited[*it]==0)
             {
            int p2=compute(*it);
             if(p2%2==0)
                 {
                 ans+=1;
                 }
                else
                 {
                   p1+=p2;   
                 }
            }
        }
        return p1+1;
    }
};

int main() {
    eventree g;
    g.getinput();
    return 0;
}
