#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef stack<ll> sl;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class gameplay
{
    ll tem,k,m,l,T,n;ll po=0;ll p=0; sl u;
    public:
    void getinput()
    {
        ios_base::sync_with_stdio(false);
        cin>>T;
        while(T--)
        {
            cin>>n;
            forn(i,0,n)
            {
                cin>>tem;
                if(u.empty()==true)
                {
                    if(tem==0){u.push(tem);k=tem;p=1;}
                }
                else if(p==1)
                {
                    u.push(tem);m=tem;p=2;
                }
                else if(p==2)
                {
                    if((k==0)&&(m==0))
                    {
                        if(tem==1)
                        {
                            u.push(tem);p=3;l=tem;
                        }
                        else 
                        {
                            po=po+1;
                        }
                    }
                    else if ((k==0)&&(m==1))
                    {
                        if(tem==1)
                        {
                            while(u.empty()==false)
                            {u.pop();}
                            p=0;
                        }
                        else
                        {
                            u.pop();u.push(tem);m=tem;po=po+1;
                        }
                    }
                }
                else if(p==3)
                {
                    if(tem==0)
                    {
                        po=po+2;u.pop();u.pop();m=tem;u.push(tem);p=2;
                    }
                    else
                    {
                        while(u.empty()==false)
                            {u.pop();}
                            p=0;
                    }
                        
                }
                
            }
            if(po%2==0){cout<<"Bob"<<endl;}
            else {cout<<"Alice"<<endl;}
            p=0;po=0; while(u.empty()==false)
                            {u.pop();}
        }
    }
};


int main() {
    gameplay g;
    g.getinput();
    return 0;
}
