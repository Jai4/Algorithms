##include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef double d;
typedef vector<d> vd;
#define forn(i,a,b) for(d i=a;i<b;i++)
#define pb push_back
class vertical{
    d n,tem,q,p,rt,tr,pree;d sum=0;d t;
    vd a;
    public:
    void getinp()
    {
        cin>>q;
        while(q--)
        {
            cin>>n;
            forn(i,0,n)
            {
                cin>>tem;
                a.pb(tem);
            }
            sort(a.begin(),a.end());
            compute();
            p=a.size()+1;
            printf("%0.2f\n",p*sum);
            sum=0;a.clear();
        }
    }
    void compute()
    {
        forn(i,0,a.size())
        {
            if(i==0){t=a.at(i);
                     tr=a.size()+1;
                    sum = sum+(1/tr);
                    pree=(1/tr);}
            else
            {
                if(t!=a.at(i))
                {
                    rt=(a.size()-i)+1;
                    t=a.at(i);
                    sum=sum+(1/rt);
                    pree=(1/rt);
                }
                else
                {
                    sum=sum+pree;
                }
            }
        }
    }
};

int main() {
    vertical g;
    g.getinp();
    return 0;
}


