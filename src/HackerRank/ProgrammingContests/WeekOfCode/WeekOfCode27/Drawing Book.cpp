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
class turn{
     int n;int p;int med;int k;int turn=0;bool b=true;
    public:
    void getinp()
    {
    cin >> n;cin >>p;
    if(n%2==0)
        {
           eve();
        }
        else
        {
           od();
            
        }
    }
    void od()
    {
        
        med=((n/2) + 1);
        if(p<med)
        {
            k=1;
          while(b==true)
              {         
                 if(p==k)
                  {
                        b=false;
                  }
                  else
                  {
                      if((k%2)!=0)
                          {
                          turn=turn+1;
                      }
                      k=k+1;
                  }
               }
            cout << turn;
        }
        else
        {
            k=n;
            while(b==true)
              {         
                 if(p==k)
                  {
                        b=false;
                  }
                  else
                  {
                      if((k%2)==0)
                          {
                          turn=turn+1;
                      }
                      k=k-1;
                  }
               }
            cout << turn;
        }
    }
    void eve()
    {
         med =n/2;
        if(p<=med)
        {
             k=1;
          while(b==true)
              {         
                 if(p==k)
                  {
                        b=false;
                  }
                  else
                  {
                      if((k%2)!=0)
                          {
                          turn=turn+1;
                      }
                      k=k+1;
                  }
               }
            cout << turn;
            
        }
        else
        {
         k=n;
            while(b==true)
              {         
                 if(p==k)
                  {
                        b=false;
                  }
                  else
                  {
                      if((k%2)==0)
                          {
                          turn=turn+1;
                      }
                      k=k-1;
                  }
               }
            cout << turn;   
        }
    }
};

int main(){
    turn g;
    g.getinp();
  
    return 0;
}