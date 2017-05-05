#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef pair<ll,s> pls;
typedef vector<pls> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define  mp make_pair
#define  pb push_back
class bigsorting{
    ll n; s pt;vll united;
  public:
    void getinp()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>pt;
            united.pb(mp(pt.length(),pt));
        }
        sort(united.begin(),united.end());
        forn(i,0,united.size())
        {
            cout<<united.at(i).second<<endl;
        }
    }
};

int main(){
    bigsorting g;
    g.getinp();
    return 0;
}
