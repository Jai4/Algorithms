#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef priority_queue<ll> pqll;
typedef vector<ll> vll;
#define sz size_t
#define pb push_back
#define forn(i,a,b) for(sz i=a;i<b;i++)
class monk{
    ll n;vll op;ll tem;pqll united;ll a,b,c;
    public:
    void getinp()
    {
        cin>>n;
        compute();
    }
    void compute()
    {
        forn(i,0,2){cin>>tem;op.pb(-1);united.push(tem);}
        forn(i,2,n){ cin>>tem;united.push(tem);result();}
        forn(i,0,op.size()){cout<<op.at(i)<<endl;}
    }
    void result()
    {
        a=united.top();
        united.pop();
        b=united.top();
        united.pop();
        c=united.top();
        united.pop();
        op.pb(a*b*c);
        united.push(a);
        united.push(b);
        united.push(c);
    }
};
 
int main()
{
    monk g;
    g.getinp();
    return 0;
}