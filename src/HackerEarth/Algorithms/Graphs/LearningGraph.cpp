#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef li::iterator lir;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class monk{
    ll n,m,k,tem,t1,t2;lir itr;
    vll united;li *a;vpll p;
    public:
    void getinp()
    {
        united.push_back(0);
        cin>>n>>m>>k;
        a=new li[n+1];
        forn(i,0,n)
        {
            cin>>tem;
            united.push_back(tem);
        }
        forn(i,0,m)
        {
         cin>>t1>>t2;
         a[t1].push_back(t2);
         a[t2].push_back(t1);
        }
        compute();
    }
    void compute()
    {
        
        forn(i,0,n)
        {
            for(itr=a[i+1].begin();itr!=a[i+1].end();itr++)
            {
                p.push_back(make_pair(united[*itr],*itr));
            }
            
            if(k>p.size())
            {
                cout<<-1<<endl;
            }
            else
            {
                sort(p.begin(),p.end(),greater<pair<ll,ll>>());
                cout<<p.at(k-1).second<<endl;
            }
            p.clear();
           
            
        }
    }
};
 
int main()
{
    monk g;
    g.getinp();
    return 0;
}
Language: C++