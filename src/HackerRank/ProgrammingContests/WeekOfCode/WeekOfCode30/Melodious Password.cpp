#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string st;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class password
{
    ll n;vector<string> vowels={"a","e","i","o","u"};vector<string> conso={"b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","z"};vector<string> t1;
    public:
    void getinp()
    {
        
        cin>>n;
        if(n%2==0)
        {
            if(n==2)
            {
                forn(i,0,vowels.size())
                {
                    forn(j,0,conso.size())
                    {
                        
                        cout<< vowels.at(i)<<conso.at(j) <<endl;
                        cout<< conso.at(j)<<vowels.at(i) <<endl;
                    }
                }
            }
            if(n==4)
            {
                forn(i,0,vowels.size())
                {
                    forn(j,0,conso.size())
                    {
                        forn(k,0,vowels.size())
                        {
                            forn(m,0,conso.size())
                            {
                        cout<< vowels.at(i)<<conso.at(j)<<vowels.at(k)<<conso.at(m) <<endl;
                        cout<<conso.at(m)<<vowels.at(k)<<conso.at(j)<<vowels.at(i)<<endl;
                            }
                        }
                    }
                }
            }
            if(n==6)
            {
                forn(i,0,vowels.size())
                {
                    forn(j,0,conso.size())
                    {
                         forn(k,0,vowels.size())
                            {
                             forn(m,0,conso.size())
                              {
                                 forn(r,0,vowels.size())
                                 {
                                   
                                      forn(e,0,conso.size())
                                      {
                              
                        cout<< vowels.at(i)<<conso.at(j)<<vowels.at(k)<<conso.at(m)<<vowels.at(r)<<conso.at(e) <<endl;
                       cout<<conso.at(e)<<vowels.at(r)<<conso.at(m)<<vowels.at(k)<<conso.at(j)<<vowels.at(i)<<endl;
                                      }
                                 }
                            }
                         }
                    }
                }
            }
        }
        else
        {
            if(n==1)
            {
                forn(i,0,vowels.size()){cout<<vowels.at(i)<<endl;}
                forn(i,0,conso.size()){cout<<conso.at(i)<<endl;}
            }
            if(n==3)
            {
                forn(i,0,vowels.size())
                {
                    forn(j,0,conso.size())
                    {
                        forn(h,0,vowels.size())
                          {
                               cout<< vowels.at(i)<<conso.at(j)<<vowels.at(h) <<endl;
                               t1.push_back(conso.at(j)+vowels.at(h));
                         } 
                    }
                }
                forn(k,0,t1.size())
                {
                    forn(i,0,conso.size())
                    {
                        cout<<t1.at(k)<<conso.at(i)<<endl;
                    }
                }
            }
            if(n==5)
            {
                forn(i,0,vowels.size())
                {
                    forn(j,0,conso.size())
                    {
                        forn(k,0,vowels.size())
                            {
                             forn(m,0,conso.size())
                              {
                                 forn(r,0,vowels.size())
                                 {
                        cout<< vowels.at(i)<<conso.at(j)<<vowels.at(k)<<conso.at(m)<<vowels.at(r) <<endl;
                       t1.push_back(conso.at(j)+vowels.at(k)+conso.at(m)+vowels.at(r));
                                 }
                             }
                        }
                    }
                }
                forn(i,0,t1.size())
                 {
                    forn(k,0,conso.size())
                        {
                        cout<<t1.at(i)<<conso.at(k)<<endl;
                    }
                }
            }    
              
               
        }
    }
};
int main(){
    password g;
    g.getinp();
    return 0;
}
