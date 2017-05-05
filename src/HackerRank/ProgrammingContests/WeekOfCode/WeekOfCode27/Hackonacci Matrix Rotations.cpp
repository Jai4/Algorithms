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
#define yu long long int
using namespace std;
class border{
    yu n,q; vector<yu> qr; yu c=0;vector<yu> diff;vector<yu> mo;yu ty=-1;yu tz=-1;yu lg;yu tem;yu bf;
    public:
    void getinp()
        {
        cin>>n>>q;
        vector<vector<yu>> w1(n,vector<yu>(n,0));
        vector<vector<yu>> w2(n,vector<yu>(n,0));
        diff.push_back(0);mo.push_back(0);
        for(int i=1;i<=7;i++)
        {
            if((i==2)||(i==4)||(i==6))
            {
                mo.push_back(90);
            }
            else
            {
                mo.push_back(80);
            }
        }
       for(int i=1;i<=n;i++)
       {
           ty=ty+1;
           for(int j=1;j<=n;j++)
           {
               tz=tz+1;
               lg=(i*j);
               lg=pow(lg,2);
               lg=lg%7;
               if(lg==0){lg=7;}
               if(mo.at(lg)==90)
               {
                   w1[ty][tz]=1;
                   w2[ty][tz]=1;
               }
               else
               {
                   w1[ty][tz]=-1;
                   w2[ty][tz]=-1;
               }
           }
           tz=-1;
       }
       for(int i=0;i<q;i++)
       {
           cin>>tem;
           qr.push_back(tem);
       }
        for(int po=0;po<3;po++)
        {
            for(int i=0;i<n/2;i++)
            {
                for(int j=0;j<(n+1)/2;j++)
                {
                    rotat(w1[i][j],w1[n-1-j][i],w1[n-1-i][n-1-j],w1[j][n-1-i]);
                }
            }
        
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(w1.at(i).at(j)!=w2.at(i).at(j))
                        {
                            c=c+1;
                        }
                    }
                }
                diff.push_back(c);
                c=0;
        }
        for(unsigned int i=0;i<qr.size();i++)
        {
            bf=(qr.at(i)/90)%4 ;
            cout << diff.at(bf) << endl;
        }
    }
    void rotat(yu &a,yu &b,yu &c,yu &d)
    {
        yu t=a;
        a=b;
        b=c;
        c=d;
        d=t;
        
    }
};
int main()
{
   border g;
   g.getinp();
   return 0;
}