#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
class grundy{
    ll t;vector<ll> number;ll tem;ll max=0;vector<ll> gr;
    public:
    void getinp()
    {
        cin >> t;
        //getting the number of stones for each test case
        for(ll i=0;i<t;i++)
        {
            cin>>tem;
            if(tem>max)
            {
                max=tem;
            }
            number.push_back(tem);
        }
        //calculating grundy number
        gr.push_back(0);gr.push_back(0);gr.push_back(1);gr.push_back(1);gr.push_back(2);gr.push_back(2);
        for(ll i=6;i<=max;i++)
        {
            gr.push_back(cal(i));
        }
        for(unsigned int i=0;i<number.size();i++)
        {
            if((gr.at(number.at(i)))!=0)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
    }
    ll cal(ll p)
    {
 
        if(((p-2)>0) && ((p-3)>0) && ((p-5)>0)) // for any n above 5
        {
            ll op1= gr.at(p-2);ll op2=gr.at(p-3);ll op3=gr.at(p-5);
            if((op1==0)||(op2==0)||(op3==0))
            {
                if(op1==0)
                {
                  if(min(op2,op3)!=1)
                  {
                      return 1;
                  }
                  else
                  {
                     if(op2==1)
                     {
                         if(op3>2)
                         {
                             return 2;
                         }
                         else
                         {
                             return 3;
                         }    
                            
                     }
                      else if(op3==1)
                      {
                          if(op2>2)
                         {
                             return 2;
                         }
                         else
                         {
                             return 3;
                         }    
                      }
                      else
                        {
                          return 1;
                      }
                  }
                   
                }
                 if(op2==0)
                {
                  if(min(op1,op3)!=1)
                  {
                      return 1;
                  }
                  else
                  {
                     if(op1==1)
                     {
                         if(op3>2)
                         {
                             return 2;
                         }
                         else
                         {
                             return 3;
                         }    
                            
                     }
                      else if(op3==1)
                      {
                          if(op1>2)
                         {
                             return 2;
                         }
                         else
                         {
                             return 3;
                         }    
                      }
                      else
                          {
                          return 1;
                      }
                          
                  }
                  
                }
               if(op3==0)
                 { 
                  if(min(op2,op1)!=1)
                  {
                      return 1;
                  }
                  else
                  {
                     if(op2==1)
                     {
                         if(op1>2)
                         {
                             return 2;
                         }
                         else
                         {
                             return 3;
                         }    
                            
                     }
                      else if(op1==1)
                      {
                          if(op2>2)
                         {
                             return 2;
                         }
                         else
                         {
                             return 3;
                         }    
                      }
                      else
                          {
                          return 1;
                      }
                   }
               }
          
          }
          
        }
        return 0;
    }
    
};

int main() {
    grundy g;
    g.getinp();
    return 0;
}
