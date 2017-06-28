#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class cc
{
    ll x1,y1,x2,y2,xc,yc,dx,dy;
    public:
    void getinput()
    {
        cin>>x1>>y1>>x2>>y2>>xc>>yc;
        dx=2*min(xc-x1,x2-xc);
        dy=2*min(yc-y1,y2-yc);
        cout<<(((dx+1)*(dy+1))-1)/2<<endl;
    }
};



int main() {
    cc g;
    g.getinput();
    return 0;
}