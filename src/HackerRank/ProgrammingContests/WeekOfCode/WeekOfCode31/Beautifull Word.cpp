#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef char c;
typedef string s;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class beautifull
{
    c f;s pt;
    public:
    void getinput()
    {
        cin>>pt;f=pt.at(0);
        forn(i,1,pt.size())
        {
            if(pt.at(i)==f){cout<<"No"<<endl;return;}
            if((pt.at(i)=='a')||(pt.at(i)=='e')||(pt.at(i)=='i')||(pt.at(i)=='o')||(pt.at(i)=='u')||(pt.at(i)=='y'))
            {
                if((f=='a')||(f=='e')||(f=='i')||(f=='o')||(f=='u')||(f=='y'))         {cout<<"No"<<endl;return;}
            }
            f=pt.at(i);
        }
        cout<<"Yes"<<endl;
    }
};

int main(){
    beautifull g;
    g.getinput();
    return 0;
}
