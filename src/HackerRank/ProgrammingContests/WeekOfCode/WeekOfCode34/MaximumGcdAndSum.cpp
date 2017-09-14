#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef map<ll,ll> mll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class maxigcd
{
    ll n,tem,maxsofar,maxsofar1=-1,maxsofar2=-1,c1,c2,ans1=0,ans2=0,k1,k2;
    mll aa;mll bb;
  public: 
    void getinput()
    {
        ios_base::sync_with_stdio(false);
      
        cin>>n;
        forn(i,0,n){cin>>tem;aa[tem]+=1;if(tem>maxsofar1){maxsofar1=tem;}}
        forn(i,0,n){cin>>tem;bb[tem]+=1;if(tem>maxsofar2){maxsofar2=tem;}}
        maxsofar=max(maxsofar1,maxsofar2);
        for(int i=maxsofar;i>0;i--)
        {
            c1=0;c2=0;k1=i;k2=i;
            while(k1<=maxsofar1)
            {
                if(aa[k1]>0)
                {
                    ans1=k1;
                    c1+=1;
                }
                k1+=i;
            }
            while(k2<=maxsofar2)
            {
                if(bb[k2]>0)
                {
                    ans2=k2;
                    c2+=1;
                }
                k2+=i;
            }
            if((c1>0)&&(c2>0))
            {
                cout<<ans1+ans2;
                break;
            }
        }
    }
};

int main() {
    maxigcd g;
    g.getinput();
    return 0;
}