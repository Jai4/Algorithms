#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class year{
    ll n;
    public:
    void getinp()
    {
        cin>>n;
        compute();
    }
    void compute()
    {
        if((n<=1917)&&(n>=1700))
        {
            if(n%4==0)
            {
                cout<<12<<"."<<"09"<<"."<<n;
            }
            else
            {
                cout<<13<<"."<<"09"<<"."<<n;
            }
        }
        else if(n>=1919)
        {
            if((n%400==0)||((n%4==0)&&(n%100!=0)))
            {
                cout<<12<<"."<<"09"<<"."<<n;
            }
            else
            {
                cout<<13<<"."<<"09"<<"."<<n;
            }
        }
        else
        {
            cout<<"26"<<"."<<"09"<<"."<<n;
        }
            
    }
};

int main(){
    year g;
    g.getinp();
    return 0;
}