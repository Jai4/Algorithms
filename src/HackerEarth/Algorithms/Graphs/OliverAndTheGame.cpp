#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class oliver
{
   
    ll n,u,v,q,type,x,y;
    ll count=1;
    vll visited,preorder,postorder;
    li *united;
   public:
   void getinput()
    {
        ios_base::sync_with_stdio(false);
       cin>>n;
       united=new li[n+1];
       for(ll i=0;i<=n;i++)
       {
           visited.pb(0);
           preorder.pb(0);
           postorder.pb(0);
       }
       forn(i,0,n-1)
       {
           cin>>u>>v;
           united[u].pb(v);
       }
       for(ll i=1;i<=n;i++)
       {
           if(visited[i]==0)
           {
               compute(i);
           }
       }
       cin>>q;
       while(q--)
       {
           cin>>type>>x>>y;
           if(type==0)
           {
               if((preorder[y]>preorder[x])&&(postorder[y]<postorder[x]))
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
           }
           else if(type==1)
           {
               if((preorder[y]<preorder[x])&&(postorder[y]>postorder[x]))
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
           }
       }
    }
    void compute(ll k)
    {
        visited[k]=1;
        preorder[k]=count;
        for(auto it=united[k].begin();it!=united[k].end();it++)
        {
            if(visited[*it]==0)
            {
                count=count+1;
                compute(*it);
            }
        }
        count=count+1;
        postorder[k]=count;
    }
};
 
int main()
{
    oliver g;
    g.getinput();
    return 0;
}
Language: C++