#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
ll di[1001][1001]={0};
class deal
{
    ll n,k,m,r1,r2,x,y,tem,p1,p2,ty;
    vll parent,rank,elements;
   public:
    void getinput()
    {
        cin>>n>>k>>m;
        parent.pb(0);rank.pb(1);
        elements.pb(0);
        forn(i,1,n+1)
        {
            parent.pb(i);
            rank.pb(1);
        }
        while(k--)
        {
            cin>>x>>y;
            r1=findp(x);
            r2=findp(y);
            if(r1!=r2)
            {
                if(rank[r1]==rank[r2])
                {
                    parent[r2]=r1;
                    rank[r1]=rank[r1]+1;
                    rank[r2]=0;
                }
                else
                {
                    if(rank[r1]<rank[r2])
                    {
                        parent[r1]=r2;
                        rank[r1]=0;
                    }
                    else
                    {
                        parent[r2]=r1;
                        rank[r2]=0;
                        
                    }
                }
            }
        }
        forn(i,0,m)
        {
            cin>>tem;
            elements.pb(tem);
        }
        for(ll i=1;i<=m;i++)
        {
           di[i][i]=1;  
        }
        for(ll p=1;p<=m-1;p++)
        {
           ty=m-p;p1=1;p2=p1+p;
            while(ty--)
            {
                if(findp(elements[p1])==findp(elements[p2]))
                {
                    di[p1][p2]=2+di[p1+1][p2-1];
                }
                else
                {
                    di[p1][p2]=max(di[p1][p2-1],di[p1+1][p2]);
                }
                p1=p1+1;
                p2=p2+1;
            }
            
        }
        
                 cout<<di[1][m]<<endl ;
            
        
    }
    ll findp(ll op)
    {
        while(op!=parent[op])
        {
            parent[op]=findp(parent[op]);
            break;
        }
        return parent[op];
    }
};
int main()
{
    deal g;
    g.getinput();
    return 0;
}



