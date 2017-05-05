#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class icecream {
    ll t,n,m,tem,index1,index2;vll united;
    pll t1;pll t2;
    public: 
    void getinp()
    {
        cin>>t;
        forn(i,0,t)
        {
            cin>>m>>n;
            forn(i,0,n)
            {
                cin>>tem;
                united.pb(mp(tem,i+1));
                
            }
            sort(united.begin(),united.end());
            compute();
            united.clear();
        }
    }
    void compute()
    {
        index1=0;index2=united.size()-1;
        while(index1!=index2)
        {
            if((united.at(index1).first+united.at(index2).first)>m)
            {
                index2-=1;
            }
            if((united.at(index1).first+united.at(index2).first)<m)
            {
                index1+=1;
            }
            if((united.at(index1).first+united.at(index2).first)==m)
            {
                if(united.at(index1).second<united.at(index2).second)
                {
                cout<< united.at(index1).second<< " "<<united.at(index2).second<<endl;
                }
                else
                {
                    cout<< united.at(index2).second<< " "<<united.at(index1).second<<endl;
                }
                break;
            }
        }
    }
};
    


int main() 
{
    
    icecream g;
    g.getinp();
    return 0;

}

