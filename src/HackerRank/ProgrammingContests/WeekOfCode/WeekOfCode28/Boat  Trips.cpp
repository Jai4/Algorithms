#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define pb push_back
class boat{
    ll n,c,m,tem;vll a;
    public:
    void getinp()
    {
        cin>>n>>c>>m;
        for(ll i=0;i<n;i++)
        {
            cin>>tem;
            a.pb(tem);
        }
        sort(a.begin(),a.end());
        compute();
    }
    void compute()
    {
        ll maximum=c*m;
        ll k=a.size()-1;
        if(a.at(k)<=maximum)
        {
            cout << "Yes" ;
        }
        else
        {
            cout << "No" ;
        }
    }
};

int main(){
    boat g;
    g.getinp();
    return 0;
}