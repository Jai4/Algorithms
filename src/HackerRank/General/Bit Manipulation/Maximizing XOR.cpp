#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
class maximize{
    ll L;ll R;ll maximum=0;ll x;ll y;
    public:
    void getinp()
    {
        cin >> L >> R;
        maxx();
    }
    void maxx()
    {
        for(ll i=L;i<R;i++)
        {
            x=i;
            for(ll j=i;j<=R;j++)
            {
                  y=x^j;
                  if(y>maximum)
                  {
                      maximum=y;
                  }
            }
        }
        cout << maximum ;
    }
};

int main() {
    maximize g;
    g.getinp();
    return 0;
}
