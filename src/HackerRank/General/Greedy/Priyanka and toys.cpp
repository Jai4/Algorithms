#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class toys
{
    ll n,tem;vll united;ll k;ll count=0;
   public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>tem;united.pb(tem);
        }
        sort(united.begin(),united.end());
        compute();
    }
    void compute()
    {
        count+=1;k=united[0];
        forn(i,1,united.size())
        {
            if(united.at(i)<=k+4)
            {
                continue;
            }
            else
            {
                count+=1;k=united.at(i);
            }
        }
        cout<<count;
    }
};


int main() {
    toys g;
    g.getinput();
    return 0;
}
