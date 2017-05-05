#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef char c;
typedef string s;
typedef stack<c> stc;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class superstring
{
    ll n;stc united;s pt;s ans;
    public:
    void getinp()
    {
        cin>>pt;
        compute();
        
        if(united.empty()==true)
        {
            cout<<"Empty String";
        }
        else
        {
            while(united.empty()==false)
            {
                
                ans=ans+united.top();
                united.pop();
            }
            for(sz i=ans.length()-1;i>=0;i--)
            {
                cout<<ans.at(i);
            }
            
            
        }
    }
    void compute()
    {
        forn(i,0,pt.length())
        {
            
            if(united.empty()==true)
            {
                united.push(pt.at(i));
               
            }
            else
            {
                if(pt.at(i)==united.top())
                {

                    united.pop();
                }
                else
                {
                    united.push(pt.at(i));
                   
                }
            }
        }
    }
    
};

int main() {
    superstring g;
    g.getinp();
    return 0;
}
