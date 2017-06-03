#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<ll,ll> mll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
class lastoccurence{
    ll n,m;mll united;ll tem;
    public:
    void getinp()
    {
        cin>>n>>m;
        compute();
        if(united.count(m)==0){cout<<-1<<endl;}
        else{cout<< united[m] <<endl;}
    }
    void compute()
    {
        forn(i,1,n)
        {
            cin>>tem;
            united[tem]=i;
        }
    }
};

int main()
{
    lastoccurence g;
    g.getinp();
    return 0;
}
