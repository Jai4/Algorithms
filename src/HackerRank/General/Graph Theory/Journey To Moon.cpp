#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>
using namespace std;
typedef long long ll;
typedef list<ll> l;
typedef vector<ll> vll;
#define pb push_back
#define forn(i,a,b) for(ll i=a;i<b;i++)
ll N,I;//global variables
class moon
{
    ll N,t1,t2;l *p;// moon and adconstruct
    vll process;ll noofcomponents=0;ll count=0;ll ans;ll sum=0;
    public:
    moon(ll K)
    {
       this->N=K;
       p=new l[N];
    }
    void adconstruct()
    {
        forn(i,0,N){process.pb(-1);}
        forn(i,0,I)
        {
            cin>>t1>>t2;
            p[t1].pb(t2);
            p[t2].pb(t1);
        }
        forn(i,0,N)
        {
          if(process.at(i)==-1)
           {
            rundfs(i);
            noofcomponents += 1;
              if(i==0){
                  ans=0;
                  sum=sum+count;
              }
              else
                {
                  ans=ans+sum*count;
                  sum=sum+count;
              }
            
                    
           }
            count=0;
        }
        result();
    }
    void rundfs(ll y)
    {
        process[y]=1;count=count+1;
        for(auto it=p[y].begin();it!=p[y].end();it++)
        {
            if(process.at(*it)==-1)
            {
                rundfs(*it);
                
            }
            else
            {
                continue;
            }
        }
        
    }
    void result()
    {
       cout<< ans ;
    }
};
 
int main()
{ 
    cin>>N>>I;
    moon g(N);
    g.adconstruct();
    return 0;
}
