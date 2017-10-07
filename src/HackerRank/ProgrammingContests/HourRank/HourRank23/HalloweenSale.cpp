#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class fg
{
    ll p,d,m,s,count=0;
  public:
    void getinput()
    {
        cin>>p>>d>>m>>s;
        if(s<p){cout<<0<<endl;return;}
        if(s==p){cout<<1<<endl;return;}
        while(1)
        {
            if(p>m)
            {
                s-=p;
                p-=d;
                count++;
                if(s<p){break;}
            }
            else
            {
                if(s<m){break;}
                s-=m;
                count++;
                
            }
        }
        cout<<count;
    }
};

int main() {
    fg g;
    g.getinput();
    return 0;
}
