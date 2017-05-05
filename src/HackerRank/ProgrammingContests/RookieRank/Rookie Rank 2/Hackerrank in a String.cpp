#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef map<c,ll> mll;
typedef mll::iterator it;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class sequence
{
    ll q;mll united;s st="hackerrank";s ts;ll startindex=0;bool b=true;bool d=true;bool e=true;c ty;
    it itr;
    public:
    void getinp()
    {
        cin>>q;
        forn(i,0,q)
        {
            cin>>ts;
            forn(i,0,st.length())
            {
                ty=st.at(i);
                    if((united.count(ty))==0)
                        {
                        united[ty]=1;
                    }
                    else
                        {
                united[ty]=united[ty]+1;
                    }
            }
            
            compute();
            united.clear();
            e=true;d=true;b=true;
        }
    }
    void compute()  
    {
        startindex=0;
        forn(k,0,st.length())
        {
            b=true;
            forn(i,startindex,ts.length())
            {
                if(ts.at(i)==st.at(k))
                {
                    ty=st.at(k);
                    united[ty]=(united[ty]-1);
                    startindex=(i+1);
                    b=false;
                    break;
                }
            }
            if(b==true)
            {
                cout<<"NO"<<endl;
                e=false;
                break;
            }
            if(startindex>=ts.length())
            {
                
                break;
            }
        }
        
        if(e!=false)
        {
            forn(i,0,st.length())
            {
                ty=st.at(i);
                if(united[ty]!=0)
                 {
                     cout<<"NO"<<endl;
                     d=false;
                     break;
                 }
            }
            if(d!=false)
            {
                cout<<"YES"<<endl;
            }
        }
        
    }
    
};

int main(){
    sequence g;
    g.getinp();
    return 0;
}
