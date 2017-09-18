#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
class ub
{
    ll q,t,n;
    bool b;
    vll a;
    public:
    void getinput()
    {
        cin>>q;
        while(q--){
            cin>>n;
            a.pb(0);
            forn(i,1,n){
                cin>>t;
                a.pb(t);
            }
           b=false;
        solve(n);
        a.clear();}
    }
    void solve(ll n)
    {
        forn(i,1,n)
        {
            if((abs(a[i])<1)||(abs(a[i])>n))
            {
                cout<<"Ugly"<<endl;return;
            }
            if(a[abs(a[i])]>0)
            {
                a[abs(a[i])]=-a[abs(a[i])];
            }
            else
            {
                
                cout<<"Ugly"<<endl;return;
                
            }
            if(i!=1)
            {
                if(abs(a[i])<abs(a[i-1]))
                {b=true;
                }
            }
        }
            if(b==true){cout<<"Beautiful"<<endl;return;}
            else{cout<<"Ugly"<<endl;return;}
    }
};

int main() {
    ub g;
    g.getinput();
    return 0;
}
