#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef deque<pll> dpll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define fore(i,a,b) for(sz i=a;i<=b;i++)
#define mp make_pair
#define pb push_back
ll v[25][25];ll d[25][25];
class chess
{
    ll n;ll f1,f2;dpll united;bool tr=true;pll er;ll count=0;ll p1,p2,p3,p4,p5,p6,p7,p8;
    public:
    void getinp()
    {
        //getting input
        cin>>n;
        fore(a,1,n-1)//for the different possible (a,b)pairs
        {
            fore(b,1,n-1)
            {
                f1=0;f2=0; //(x,y co-ordinates on the chess board)
                united.pb(mp(f1,f2));//queue used to run bfs , initially pushed (0,0) position
                forn(i,0,n)   //setting up the visited and distance array for each square in the board
                {
                    forn(k,0,n)
                    {
                        v[i][k]=0;d[i][k]=0;
                    }
                }
                while(united.empty()==false) // running bfs
                {
                    if(tr==true) 
                    {
                        er=united.front();  // processing the first node from the queue
                        united.pop_front();
                        f1=er.first;f2=er.second;//(updating current (x,y) position to (f1,f2) )
                        compute(a,b); // calling function to compute all possible positions from current position
                    }
                    else
                    {
                        united.clear();//resetting for next (a,b) value
                        break;
                    }
                }
                if(tr==true)
                {
                    cout<<-1<<" "; // the (n-1)(n-1) position is not reachable
                }
                else
                {
                    cout<<d[n-1][n-1]<<" "; 
                }
                tr=true;//resetting for next (a,b) value
            }
            cout<<endl;
        }
    }
    void compute(ll a,ll b)
    {
        count=d[f1][f2]+1; // to assign distance of any (x,y) from (0,0)
        for(ll r=0;r<2;r++)
        {
            if(r==0)
            {
                p1=f1+a;p2=f2+b;  p3=f1-a;p4=f2-b;  p5=f1+a;p6=f2-b;  p7=f1-a;p8=f2+b; // 4 possible positions
            }
            else
            {
                p1=f1+b;p2=f2+a;  p3=f1-b;p4=f2-a;  p5=f1+b;p6=f2-a;  p7=f1-b;p8=f2+a; //4 possible positions
            }
            if(((p1>=0)&&(p1<=(n-1)))&&((p2>=0)&&(p2<=(n-1)))) //to check whether the p's are within bounds
            {
                if(v[p1][p2]==0) //if position is not already visited
                {
                    united.pb(mp(p1,p2)); //pushing into queue
                    v[p1][p2]=1;  // updating visited and distance arrays
                    d[p1][p2]=count;
                    if((p1==(n-1))&&(p2==(n-1))) //destination found
                    {
                        tr=false;
                        return;
                    }
                }
            }
           
           if(((p3>=0)&&(p3<=(n-1)))&&((p4>=0)&&(p4<=(n-1))))
            {
                if(v[p3][p4]==0)
                {
                    united.pb(mp(p3,p4));
                    v[p3][p4]=1;
                    d[p3][p4]=count;
                    if((p3==(n-1))&&(p4==(n-1)))
                    {
                        tr=false;
                        return;
                    }
                }
            }
            if(((p5>=0)&&(p5<=(n-1)))&&((p6>=0)&&(p6<=(n-1))))
            {
                if(v[p5][p6]==0)
                {
                    united.pb(mp(p5,p6));
                    v[p5][p6]=1;
                    d[p5][p6]=count;
                    if((p5==(n-1))&&(p6==(n-1)))
                    {
                        tr=false;
                        return;
                    }
                }
            }
            if(((p7>=0)&&(p7<=(n-1)))&&((p8>=0)&&(p8<=(n-1))))
            {
                if(v[p7][p8]==0)
                {
                    united.pb(mp(p7,p8));
                    v[p7][p8]=1;
                    d[p7][p8]=count;
                    if((p7==(n-1))&&(p8==(n-1)))
                    {
                        tr=false;
                        return;
                    }
                }
            }
        }
        v[f1][f2]=1; //current (f1,f2) updated
    }
};

int main(){
    chess g;
    g.getinp();
    return 0;
}
