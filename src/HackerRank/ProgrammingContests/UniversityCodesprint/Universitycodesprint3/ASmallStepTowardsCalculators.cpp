#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string sp;
typedef char c;
#define sz size_T
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class solve
{
    sp temp;
    public:
    void inpg()
    {
        cin >> temp;
        if(temp[1]=='+')
        {
            ll t1 = temp[0] - '0' ;
            ll t2 = temp[2] - '0' ;
            cout << t1+t2 << endl;
        }
        else if(temp[1]=='-')
        {
            ll t3 = temp[0] - '0' ;
            ll t4 = temp[2] - '0' ;
            if(t3>t4)
            {
                cout << t3-t4 << endl;
            }
            else if(t4>t3)
            {
                cout << -(t4-t3) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
};
int main() 
{
    solve s;
    s.inpg();
    return 0;
}