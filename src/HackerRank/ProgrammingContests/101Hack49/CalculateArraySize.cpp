#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class md
{
    ll n,tem,mul=1;
    public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>tem;
            mul*=tem;
        }
        mul=mul*4;
        cout<<floor(mul/1024)<<endl;;
    }
};

int main() {
    md g;
    g.getinput();
    return 0;
}
