#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class factory
{
    ll n,tem;ll sum=0;
    public:
    void getinp()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>tem;
            sum=sum+tem;
        }
       
        if((n==1)||(n==2))
        {
            if((n==1)&&(sum==0))
            {
                cout<<"Yes"<<endl;
            }
            else if((n==2)&&(sum==2))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
        compute();
        }
    }
    void compute()
    {
        if((sum)==(n+(n-2)))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
};
int main()
{
    factory g;
    g.getinp();
    return 0;
}
