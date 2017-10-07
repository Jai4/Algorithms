#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,pll>> vpll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back

class krus
{
    ll n,m,a,b,w,ans1=0,ans2=0,last;
    vll r1,r2,p1,p2;
    vpll united;
    public:
    void getinput()
    {
     cin>>n>>m;
     forn(i,0,n+1)
     {
         p1.pb(i);p2.pb(i);
         r1.pb(1);r2.pb(1);
     }
     while(m--)
     {
         cin>>a>>b>>w;
         united.pb(mp(w,mp(a,b)));
     }
        sort(united.begin(),united.end());
        kr1();
        kr2();
        cout<<ans1<<" "<<ans2;
    }
    
    void kr1()
    {
        for(ll i=0;i<united.size();i++) 
        {
           if(findparent(united[i].second.first,p1) != findparent(united[i].second.second,p1))
           {
               ans1 += united[i].first;
               last  = united[i].first;
               unionset(p1,r1,i);
           }
        }
        ans1-=last;
    }
    
    void kr2()
    {
        for(ll i=0;i<united.size();i++)
        {
                if(findparent(united[i].second.first,p2) != findparent(united[i].second.second,p2))
                {
                    if(united[i].first<last)
                    {
                        unionset(p2,r2,i);
                    }
                    else 
                    {
                        ans2++;
                    }
                }
          }
 }
 void unionset(vll &p,vll &r,ll i)
    {
        ll t1=findparent(united[i].second.first,p);
        ll t2=findparent(united[i].second.second,p);
        if(r[t1]==r[t2])
        {
            r[t1]+=1;r[t2]=0;
            p[t2]=t1;
        }
        else if(r[t1]<r[t2])
        {
            r[t1]=0;
            p[t2]=t1;
        }
        else
        {
            r[t2]=0;
            p[t1]=t2;
        }
    }
 ll findparent(ll k,vll &parent)
    {
        if(k!=parent[k])
        {
            parent[k]=findparent(parent[k],parent);
        }
        return parent[k];
    }
};
int main()
{
    krus g;
    g.getinput();
    return 0;
}


