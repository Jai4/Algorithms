#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> ppll;
typedef queue<ppll> qpll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
ll a[301][301] = {0}; ll visited[301][301] = {0}; 
class laptop
{
    ll no,noq,xcor,ycor,weight,currweight; 
    pll temp1,xy; ppll temp2,tem;
    qpll wait;
    vll xarray,yarray,power;
    ll maxweight=0,x1,y1 ;
    public:
    void inp()
    {
        cin >> no;
        cin >> noq;
        while(noq--)
        {
            cin >> xcor >> ycor >> weight ;
           // a[xcor][ycor] += weight;
            xarray.pb(xcor);
            yarray.pb(ycor);
            power.pb(weight);
        }
        forl(i,0,xarray.size())
        { 
           
            temp1 = mp(xarray[i],yarray[i]);
            temp2 = mp(temp1,power[i]);
             wait.push(temp2); // pushing (x,y) pair and weight as second cor ; pair((x,y),weight)   :)
            a[xarray[i]][yarray[i]] += power[i];
            if( a[xarray[i]][yarray[i]]>maxweight)
        {
            maxweight =  a[xarray[i]][yarray[i]];
        }
             while(wait.empty()==false)
                    {
                          tem = wait.front();
                          wait.pop();
                          movement();
                    }
           
            for(int i=0;i<no;i++)
            {
                for(int j=0;j<no;j++)
                {
                    visited[i][j]=0;
                }
            }
        }
      /*  for(int i=0;i<no;i++)
        {
            for(int j=0;j<no;j++)
            {
                cout << a[i][j] <<" " ;
            }
            cout << endl;
        }*/
        cout << maxweight << endl;
    }
    void movement()
    {
        
        xy = tem.first ; currweight = tem.second;
        x1 = xy.first ; y1  = xy.second ; //x-cordinate and y-cordinate :)
        visited[x1][y1]=1; 
        if(currweight>maxweight)
        {
            maxweight = currweight;
        }
        if (((x1+1 >=0)&&(x1+1<=no-1)) && ((y1+1>=0)&&(y1+1<=no-1))) //lowerrightdiag
        {
            if(currweight!=1)
            {
                if(visited[x1+1][y1+1]==0) // not visited before
                {
                    visited[x1+1][y1+1]=1;
                    a[x1+1][y1+1] =  a[x1+1][y1+1]  +     currweight-1; 
                    if(a[x1+1][y1+1]>maxweight)
                    {
                        maxweight = a[x1+1][y1+1] ;
                    }
                    wait.push(mp(mp(x1+1,y1+1),currweight-1)); //pushed here :)
                }
            }
        }
         if (((x1+1 >=0)&&(x1+1<=no-1)) && ((y1>=0)&&(y1<=no-1))) //lowerpoint
        {
            if(currweight!=1)
            {
                if(visited[x1+1][y1]==0) // not visited before
                {
                    visited[x1+1][y1]=1;
                    a[x1+1][y1] = a[x1+1][y1] + currweight-1;
                     if(a[x1+1][y1]>maxweight)
                    {
                        maxweight = a[x1+1][y1] ;
                    }
                    wait.push(mp(mp(x1+1,y1),currweight-1)); //pushed here :)
                }
            }
        }
          if (((x1+1 >=0)&&(x1+1<=no-1)) && ((y1-1>=0)&&(y1-1<=no-1))) //lowerleftdiag
        {
            if(currweight!=1)
            {
                if(visited[x1+1][y1-1]==0) // not visited before
                {
                    visited[x1+1][y1-1]=1;
                    a[x1+1][y1-1] = a[x1+1][y1-1] +  currweight-1;
                      if(a[x1+1][y1-1]>maxweight)
                    {
                        maxweight = a[x1+1][y1-1] ;
                    }
                    wait.push(mp(mp(x1+1,y1-1),currweight-1)); //pushed here :)
                }
            }
        }
           if (((x1 >=0)&&(x1<=no-1)) && ((y1-1>=0)&&(y1-1<=no-1))) //leftpoint
        {
            if(currweight!=1)
            {
                if(visited[x1][y1-1]==0) // not visited before
                {
                    visited[x1][y1-1]=1;
                    a[x1][y1-1] =a[x1][y1-1] +  currweight-1;
                      if(a[x1][y1-1]>maxweight)
                    {
                        maxweight = a[x1][y1-1] ;
                    }
                    wait.push(mp(mp(x1,y1-1),currweight-1)); //pushed here :)
                }
            }
        }
           if (((x1 >=0)&&(x1<=no-1)) && ((y1+1>=0)&&(y1+1<=no-1))) //rightpoint
        {
            if(currweight!=1)
            {
                if(visited[x1][y1+1]==0) // not visited before
                {
                    visited[x1][y1+1]=1;
                    a[x1][y1+1] = a[x1][y1+1] + currweight-1;
                      if(a[x1][y1+1]>maxweight)
                    {
                        maxweight = a[x1][y1+1] ;
                    }
                    wait.push(mp(mp(x1,y1+1),currweight-1)); //pushed here :)
                }
            }
        }
            if (((x1-1 >=0)&&(x1-1 <=no-1)) && ((y1+1>=0)&&(y1+1<=no-1))) //upperrightdiag
        {
            if(currweight!=1)
            {
                if(visited[x1-1][y1+1]==0) // not visited before
                {
                    visited[x1-1][y1+1]=1;
                    a[x1-1][y1+1] = a[x1-1][y1+1] + currweight-1;
                      if(a[x1-1][y1+1] > maxweight)
                    {
                        maxweight = a[x1-1][y1+1] ;
                    }
                    wait.push(mp(mp(x1-1,y1+1),currweight-1)); //pushed here :)
                }
            }
        }
              if (((x1-1 >=0)&&(x1-1 <=no-1)) && ((y1-1>=0)&&(y1-1<=no-1))) //upperleftdiag
        {
            if(currweight!=1)
            {
                if(visited[x1-1][y1-1]==0) // not visited before
                {
                    visited[x1-1][y1-1]=1;
                    a[x1-1][y1-1] = a[x1-1][y1-1] +  currweight-1;
                      if(a[x1-1][y1-1]>maxweight)
                    {
                        maxweight = a[x1-1][y1-1];
                    }
                    wait.push(mp(mp(x1-1,y1-1),currweight-1)); //pushed here :)
                }
            }
        }        
              if (((x1-1 >=0)&&(x1-1 <=no-1)) && ((y1>=0)&&(y1<=no-1))) //upperpoint
        {
            if(currweight!=1)
            {
                if(visited[x1-1][y1]==0) // not visited before
                {
                    visited[x1-1][y1]=1;
                    a[x1-1][y1] = a[x1-1][y1] +  currweight-1;
                      if(a[x1-1][y1]> maxweight)
                         {
                        maxweight = a[x1-1][y1];
                    }
                    wait.push(mp(mp(x1-1,y1),currweight-1)); //pushed here :)
                }
            }
        }        

        
        
    }
};
int main() 
{
    laptop p;
    p.inp();
    return 0;
}
