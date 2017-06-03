#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class duplication
{
    ll n,q;s a="0";s b="1";s t1,t2,t;
    public:
    void getinput()
    {
       while(t.size()<=1024)
       {
           t1=a+b;//01 //01101001 //01101001100101101001011001101001
           t2=b+a;//10 //10010110 // 10010110011010010110100110010110
           t=t1+t2;//0110 //0110100110010110  //0110100110010110100101100110100110010110011010010110100110010110
           a=t;//a=0110   //0110100110010110  //
           b=t2+t1;//b=1001 //1001011001101001
       }
        cin>>q;
        forn(i,0,q)
        {
            cin>>n;
            cout<<t[n]<<endl;
        }
       
       
        
    }
};

int main() {
   duplication g;
    g.getinput();
    return 0;
}