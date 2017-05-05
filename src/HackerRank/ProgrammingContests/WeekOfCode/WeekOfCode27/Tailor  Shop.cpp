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
#define ll long long
using namespace std;
class button{
    ll int n,p;ll int t;vector<ll int> a;ll int total;
    public:
    void getinp()
        {
        cin>>n>>p;
        for(int i=0;i<n;i++)
            {
            cin >> t;
            a.push_back(t);
        }
        cal();
        ans();
    }
    void cal()
        {
        for(int i=0;i<n;i++)
            {
            if((a.at(i)%p)!=0)
                {
                   a.at(i)=(a.at(i)/p)+1;
                }
            else
                {
                a.at(i)=(a.at(i)/p);
            }
        }
        sort(a.begin(),a.end());
        
    }
    void ans()
        {
        total=a.at(0);
        for(int i=1;i<n;i++)
            {
            if(a.at(i)<=a.at(i-1))
                {
                a.at(i)=a.at(i-1)+1;
                total=total+a.at(i);
            }
            else
                {
                total=total+a.at(i);
            }
        }
        cout << total;
    }
    
};

int main(){
    button g;
    g.getinp();
   
    return 0;
}