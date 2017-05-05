#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class tp
{
    public:
    s st="min(int, ";
};
class pt
{
    ll n;s ans;
    
    public:
    void getinp()
    {
        cin>>n;tp p;
        forn(i,1,n)
        {
            ans=ans+p.st;
        }
        ans=ans+"int";
        forn(i,1,n)
        {
            ans=ans+")";
        }
        cout<<ans<<endl;
    }
    
};
int main(){
    pt g;
    g.getinp();
    return 0;
}
