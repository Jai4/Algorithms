#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)

int main() {
    ll n;bool b=false;ll sum=0;ll tem;
    cin>>n;
    if(n==1)
    {
        cin>>tem;
        if(tem%2==0)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    forn(i,0,n)
    {
        cin>>tem;
        sum+=tem;
        if(tem%2!=0)
        {
            b=true;
        }
    }
    if(sum%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
      if(b==true)
      {
          cout<<1<<endl;
      }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}