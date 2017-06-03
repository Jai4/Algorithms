#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef li::iterator it;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class happy
{
    ll T,N,M,U,V;ll bc=0;ll rc=0;ll ans=0;bool b=true;bool f=false;
    vll color,visited;
    li *united;it itr;
    public:
    void getinput()
    {
        cin>>T;
        while(T--)
        {
            cin>>N>>M;
            united=new li[N+1];
            forn(i,0,N+1)
            {
                color.pb(0);
                visited.pb(0);
            }
            while(M--)
            {
                cin>>U>>V;
                united[U].pb(V);
                united[V].pb(U);
            }
            for(ll i=1;i<=N;i++)
            {
                if(visited[i]==0)
                {
                    color[i]=1;//red color
                    compute(i);
                    if(b==true)
                    {
                        rc+=1;
                        ans+=max(bc,rc);
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                        f=true;
                        break;
                    }
                }
                rc=0;bc=0;
            }
            if(f==false){cout<<ans<<endl;}
            b=true;visited.clear();color.clear();f=false;
            bc=0;rc=0;ans=0;united->clear();
        }
    }
    void compute(ll k)
    {
        visited[k]=1;
        for(auto itr=united[k].begin();itr!=united[k].end();itr++)
        {
            if(b==true)
            {
                if((visited[*itr]==0)&&(color[k]==1))
                {
                    color[*itr]=-1; //color it blue
                    bc+=1;
                    compute(*itr);
                }
                else if((visited[*itr]==0)&&(color[k]==-1))
                {
                    color[*itr]=1;//color it red
                    rc+=1;
                    compute(*itr);
                }
                else if(visited[*itr]==1)
                {
                    if(color[k]==color[*itr])
                    {
                        b=false;
                    }
                }
            }
            else
            {
                break;
            }
        }
    }
};
int main()
{
    happy g;
    g.getinput();
    return 0;
}