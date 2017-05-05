#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class candies
{
    ll n,t,tem,n1;vll united;ll ans=0;
  public:
    void getinp()
    {
        cin>>n>>t;
        n1=n;
        forn(i,0,t)
        {
            cin>>tem;
            united.push_back(tem);
        }
        forn(i,1,t+1)
        {
            if(i!=t)
            {
                n1=n1-united.at(i-1);
                if(n1<5)
                {
                    ans=ans+(n-n1);
                    n1=n1+(n-n1);
                   
                }
            }
        }
        cout<<ans;
    }
};
int main(){
    candies g;
    g.getinp();
    return 0;
}
