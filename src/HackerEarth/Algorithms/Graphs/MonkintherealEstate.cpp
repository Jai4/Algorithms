#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef set<ll> sll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class realestate{
    ll T,E,t1,t2;sll united;
    public:
    void getinp()
    {
        cin>>T;
        while(T--)
        {
            cin>>E;
            compute();
            united.clear();
        }
    }
    void compute()
    {
        forn(i,0,E)
        {
            cin>>t1>>t2;
            united.insert(t1);
            united.insert(t2);
        }
        cout<< united.size()<<endl;
    }
    
    
};
int main()
{
    realestate g;
    g.getinp();
    return 0;
}
Language: C++