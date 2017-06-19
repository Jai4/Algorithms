#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class twina
{
    
    ll n,t;
    vpll a,b;
  public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>t;
            a.pb(mp(t,i));
        }
        forn(i,0,n)
        {
            cin>>t;
            b.pb(mp(t,i));
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[0].second!=b[0].second)
        {
            cout<<a[0].first+b[0].first<<endl;
        }
        else
        {
            if((a[0].first+b[1].first)<(a[1].first+b[0].first))
            {
                cout<<a[0].first+b[1].first<<endl;
            }
            else
            {
                cout<<a[1].first+b[0].first<<endl;
            }
        }
    }
};


int main() {
    twina g;
    g.getinput();
    return 0;
}