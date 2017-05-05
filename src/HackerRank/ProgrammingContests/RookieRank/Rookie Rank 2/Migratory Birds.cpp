#include <iostream>
#include <map>
#include <vector>
#include <cstdio>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;
typedef long long ll;
typedef map<ll,ll> mll;
typedef mll::iterator it;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class idtype
{
    ll n,type;mll united;it itr;ll max=-1;ll index;
    public:
    void getinp()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>type;
            if(united.count(type)==0)
                {
                united[type] = 1;
            }
            else
                {
                united[type] = united[type] + 1;
            }
            
        }
        compute();
    }
    void compute()
    {
        for(itr=united.begin();itr!=united.end();itr++)
        {
           if (united[itr->first]>max)
               {
               max=united[itr->first];
               index=itr->first;
               }
            
        }
        cout<< index ;
    }
};
int main()
{
    idtype g;
    g.getinp();
    return 0;
}