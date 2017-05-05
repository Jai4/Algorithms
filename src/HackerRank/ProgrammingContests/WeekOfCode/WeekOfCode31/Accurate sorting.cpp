#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back

class accurate
{
  ll q,n,h,tem; vll united;bool b=false;ll op=0;
    
    public:
    void getinput()
    {
        cin>>q;
        while(q--)
        {
            cin>>n;
            forn(i,0,n){cin>>tem;united.pb(tem);}
            forn(i,0,united.size())
            {
                h=united.at(i);
                if(((h-1)-op)>0)
                    
                {
                    cout<<"No"<<endl;
                    b=true;
                    break;
                }
                op=op+1;
            }
            if(b==false){cout<<"Yes"<<endl;}
            united.clear();b=false;op=0;
        }
    }
};
int main() {
    accurate g;
    g.getinput();
    return 0;
}
