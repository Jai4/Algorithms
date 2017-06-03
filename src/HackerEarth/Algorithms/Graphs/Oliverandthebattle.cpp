#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
ll a[1001][1001]={0};
ll visited[1001][1001]={0};
class oliver
{
    ll T,N,M,tem,temcount;ll count=0;ll maxever=0;
  public:
  void getinput()
  {
      ios_base::sync_with_stdio(false);
      cin>>T;
      while(T--)
      {
          cin>>N>>M;
          forn(i,1,N)
          {
              forn(k,1,M)
              {
                 cin>>tem;
                 a[i][k]=tem;
              }
          }
          forn(i,1,N)
          {
              forn(k,1,M)
              {
                  if((visited[i][k]==0)&&(a[i][k]==1))
                  {
                      temcount=1;
                      compute(i,k);
                      count+=1;
                      if(temcount>maxever)
                      {
                          maxever=temcount;
                      }
                  }
              }
          }
          cout<<count<<" "<<maxever<<endl;
          count=0;temcount=1;maxever=0;
          forn(i,1,N)
          {
              forn(k,1,M)
              {
                  a[i][k]=0;
                  visited[i][k]=0;
              }
          }
      }
  }
  void compute(ll i,ll k)
  {
      
      visited[i][k]=1;
      if(((i-1>=1)&&(i-1<=N)) && ((k-1>=1)&&(k-1<=M)))
      {
          if((a[i-1][k-1]==1)&&(visited[i-1][k-1]==0))
          {
              temcount+=1;
              compute(i-1,k-1);
          }
      }
      if(((i-1>=1)&&(i-1<=N)) && ((k>=1)&&(k<=M)))
      {
          if((a[i-1][k]==1)&&(visited[i-1][k]==0))
          {
              temcount+=1;
              compute(i-1,k);
          }
      }
      if(((i-1>=1)&&(i-1<=N)) && ((k+1>=1)&&(k+1<=M)))
      {
          
          if((a[i-1][k+1]==1)&&(visited[i-1][k+1]==0))
          {
              temcount+=1;
              compute(i-1,k+1);
          }
      }
      if(((i>=1)&&(i<=N)) && ((k-1>=1)&&(k-1<=M)))
      {
          if((a[i][k-1]==1)&&(visited[i][k-1]==0))
          {
              temcount+=1;
              compute(i,k-1);
          }
      }
      if(((i>=1)&&(i<=N)) && ((k+1>=1)&&(k+1<=M)))
      {
          if((a[i][k+1]==1)&&(visited[i][k+1]==0))
          {
              temcount+=1;
              compute(i,k+1);
          }
      }
      if(((i+1>=1)&&(i+1<=N)) && ((k-1>=1)&&(k-1<=M)))
      {
          if((a[i+1][k-1]==1)&&(visited[i+1][k-1]==0))
          {
              temcount+=1;
              compute(i+1,k-1);
          }
      }
     if(((i+1>=1)&&(i+1<=N)) && ((k>=1)&&(k<=M)))
      {
          if((a[i+1][k]==1)&&(visited[i+1][k]==0))
          {
              temcount+=1;
              compute(i+1,k);
          }
      }
      if(((i+1>=1)&&(i+1<=N)) && ((k+1>=1)&&(k+1<=M)))
      {
        if((a[i+1][k+1]==1)&&(visited[i+1][k+1]==0))
          {
              temcount+=1;
              compute(i+1,k+1);
          }   
      }
  }
};
 
int main()
{
    oliver g;
    g.getinput();
    return 0;
}