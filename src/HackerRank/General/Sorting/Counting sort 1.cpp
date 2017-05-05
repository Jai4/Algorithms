#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
class cosort
{
    ll N,tem;vll input;
    public:
    
    void getinp()
    {
        cin>>N;
        for(int i=0;i<100;i++)
         {
            input.push_back(0);
        }
        for(ll i=0;i<N;i++)
        {
            cin>>tem;
            input[tem]=input[tem]+1;
        }
        result();
    }
    void result()
    {
        for(ll i=0;i<100;i++)
        {
            cout << input[i]<<" " ;
        }
    }
};

int main() {
    cosort g;
    g.getinp();
    return 0;
}

