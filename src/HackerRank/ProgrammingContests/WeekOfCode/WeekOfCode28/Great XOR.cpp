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
typedef long ll;
class xort{
    ll q;ll x;ll count=0;ll tem;ll p;
    public:
    void getinp()
     {
        cin>>q;
        while(q--)
        {
            cin>>x;
            if(x==1){cout<< 0<<endl;}
            else{
                com();}
        }
    }
    void com()
    {
        tem=x;
        p=next2();
        if(p==tem){
            cout << tem-1 << endl;
        }else{
            cout << (p-tem)-1 <<endl;}
    }
    
ll next2( )
{
    x--;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x++;
    return x;
}
 
};

int main(){
    xort g;
    g.getinp();
    return 0;
}