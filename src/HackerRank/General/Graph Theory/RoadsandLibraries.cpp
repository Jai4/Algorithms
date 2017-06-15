#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef li::iterator it;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
class roads
{
    ll q,nc,nr,cc,cr,a,b;
    ll count=0;
    li *united;vll visited;ll ans=0;
    it itr;
    //nc is number of cities,nr is number of roads,cc is clib , cr is croad
  public:
    void getinput()
    {
        cin>>q;
        while(q--)
        {
            cin>>nc>>nr>>cc>>cr;
            visited.pb(0);
            forn(i,1,nc){visited.pb(0);}
            united = new li[nc+1];
            while(nr--)
            {
                cin>>a>>b; //getting input for roads
                united[a].pb(b);
                united[b].pb(a);
            }
            forn(i,1,nc)
            {
                if(visited[i]==0)
                {
                compute(i);
                count+=1;
                ans+=min((count*cc),((count-1)*cr+cc));
                count=0;
                }
            }
            cout<<ans<<endl;
            visited.clear();ans=0;
            united->clear();
            count=0;
        }
                
    }
    void compute(ll k)
    {
        visited[k]=1;
        for(auto itr=united[k].begin();itr!=united[k].end();itr++)
        {
            if(visited[*itr]==0)
            {
                compute(*itr);
                count+=1;
            }
        }
    }
};

int main() {
    roads g;
    g.getinput();
    return 0;
}
