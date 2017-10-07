
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class solution{
    ll n,x,y,vr;
    char direction;
    public:
    void getinput()
    {
        cin>>n>>direction;
        cin>>x>>y;
        if(n%2==0){
        if((x==0)&&(y==(n-1)))
        {
            if((direction=='s')||(direction=='n'))
            {
                if(direction=='n')
                {
                  movesidewaysrighttc(); //correct
                }
                else
                {
                   sf2();
                }
            }
            else
            {
                if(direction=='e')
                {
                  moveupdownrighttc();  //correct
                }
                else
                {
                   sf2();
                    
                }
            }
        }
        
        else if((x==0)&&(y==0))
        {
            if((direction=='n')||(direction=='s'))
            {
                if(direction=='n')
                {
                    movesidewayslefttc(); //correct
                }
                else
                {
                    
                    sf1();
                }
            }
            else
            {
                if(direction=='e')
                {
                   sf1();
                }
                else
                {
                     moveupdownlefttc();  //correct
                }
            }
        }
        
        else if((x==n-1)&&(y==0))
        {
            if((direction=='s')||(direction=='n'))
            {
                if(direction=='s')
                {
                     movesidewaysleftbc(); //correct
                }
                else
                {
                     
                    sf3();
                }
            }
            else
            {
                if(direction=='w')
                {
                  moveupdownleftbc(); //correct 
                }
                else
                {
                    
                    sf3();
                }
            }
        }
        
        else 
        {
            if((direction=='s')||(direction=='n'))
            {
                if(direction=='s')
                {
                    movesidewaysrightbc();
                }
                else
                {
                      sf4();             
                }
            }
            else
            {
                if(direction=='e')
                {
                moveupdownrightbc();
                }
                else
                {
                    sf4();
                }
            }
            
         }
        }
        else
        {
            
            if((x==0)&&(y==0))
            {
                if((direction=='e')||(direction=='s'))
                {
                    ll a[n][n];
                    
                        ll po=1;
                        
                       
                            for(int i=0;i<n;i++)
                            {
                                a[i][0]=po;
                                po+=1;
                            }
                        
                     
                        po=n*n;
                        for(int i=0;i<n;i++)
                        {
                            if(i%2==0)
                            {
                                for(int j=n-1;j>=1;j--)
                                {
                                    a[i][j]=po;
                                    po-=1;
                                }
                            }
                            else
                            {
                                for(int j=1;j<n;j++)
                                {
                                    a[i][j]=po;
                                    po-=1;
                                }
                            }
                        }
                    if(direction=='s'){
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<n;j++)
                            {
                                cout<<a[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                      }
                        else
                        {
                             for(int j=0;j<n;j++)
                             {
                                 for(int i=0;i<n;i++)
                                 {
                                     cout<<a[i][j]<<" ";
                                 }
                                 cout<<endl;
                             }
                        }
                    }
                 else if((direction=='w')||(direction=='n'))  
                 {
                     if(direction=='n'){movesidewayslefttc();}
                     else{moveupdownlefttc();}
                 }
                
            }
            else if((x==0)&&(y==n-1))
            {
                if((direction=='e')||(direction=='n'))
                {
                            if(direction=='e')
                            {
                                        ll a[n][n];
                                vr=n*n;ll tem;
                                for(int j=0;j<n;j++)
                                {
                                    if(j%2==0)
                                    {
                                        for(int i=0;i<n;i++)
                                        {
                                            a[i][j]=vr;

                                            vr-=1;
                                            if(i==n-1){tem=vr;}
                                        }
                                    }
                                    else
                                    {

                                        for(int i=n-1;i>=0;i--)
                                        {
                                            a[i][j]=tem;
                                            tem-=1;
                                            if(i==0)
                                            {vr=tem;}
                                        }
                                    }
                                }
                                    for(int i=n-1;i>=0;i--)
                                    {
                                        for(int j=0;j<n;j++)
                                        {
                                            cout<<a[i][j]<<" ";
                                        }
                                        cout<<endl;
                                    }
                                }
                            
                    else{movesidewaysrighttc();}
                }
                else
                {
                    ll po=1;
                    ll a[n][n];
                    for(int j=n-1;j>=0;j--)
                    {
                        a[0][j]=po;
                        po+=1;
                    }
                    po=n*n;
                    for(int j=n-1;j>=0;j--)
                    {
                        if(j%2==0)
                        {
                            for(int i=n-1;i>0;i--)
                            {
                                        a[i][j]=po;
                                po-=1;
                            }
                        }
                        else
                        {
                             for(int i=1;i<n;i++)
                            {
                                 
                                        a[i][j]=po;
                                po-=1;                                                                                          
                            }
                        }
                    }
                    if(direction=='w')
                    {
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<n;j++)
                            {
                                cout<<a[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                    }
                    else
                    {
                        for(int j=n-1;j>=0;j--)
                        {
                            for(int i=n-1;i>=0;i--)
                            {
                                cout<<a[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                    }
                }
            }
            else if((x==n-1)&&(y==0))
            {
                if((direction=='w')||(direction=='s'))
                {
                    if(direction=='w'){moveupdownleftbc();}
                    if(direction=='s')
                    {
                          ll vr=n;ll a[n][n];ll k;
                            for(int j=0;j<n;j++)
                            {
                                if(j%2==0)
                                {
                                    k=0;
                                    for(int i=0;i<n;i++)
                                    {
                                        a[j][i]=vr-k;
                                        if(i==0)
                                        {
                                            vr=vr-k;
                                        }
                                        k+=1;
                                    }
                                }
                                else
                                {
                                    k=0;vr+=1;
                                    for(int i=0;i<n;i++)
                                    {
                                        a[j][i]=vr+k;

                                        if(i==n-1){vr=vr+k;}
                                        k+=1;

                                    }
                                    vr+=n;

                                }
                            }
                        for(int j=n-1;j>=0;j--)
                        {
                            for(int i=n-1;i>=0;i--)
                            {
                                cout<<a[j][i]<<" ";
                            }
                            cout<<endl;
                        }
                        
                        
                    }
                }
                else
                {
                    ll a[n][n];ll po=1;
                    for(int j=0;j<n;j++)
                    {
                        a[n-1][j]=po;
                        po+=1;
                    }
                    po=n*n;
                    for(int j=0;j<n;j++)
                    {
                        if(j%2==0)
                        {
                            for(int i=0;i<n-1;i++)
                            {

                                a[i][j]=po;
                                po-=1;
                            }
                        }
                        else
                        {
                            for(int i=n-2;i>=0;i--)
                            {
                                a[i][j]=po;
                                po-=1;
                            }
                        }
                    }
                        if(direction=='e')
                        {
                            for(int i=0;i<n;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    cout<<a[i][j]<<" ";
                                }
                                cout<<endl;
                            }
                        }
                        else
                        {
                            for(int j=n-1;j>=0;j--)
                            {
                                for(int i=n-1;i>=0;i--)
                                {
                                    cout<<a[i][j]<<" ";
                                }
                                cout<<endl;
                            }
                        }
                    
                    
                }
            }
            else if((x==n-1)&&(y==n-1))
            {
                if((direction=='e')||(direction=='s'))
                {
                                 ll po=n*n-n+1;ll a[n][n];ll tem;
                    for(int j=0;j<n;j++)
                    {
                        if(j%2==0)
                        {
                            for(int i=0;i<n;i++)
                            {
                                  a[j][i]=po;
                                  if(i==n-1){tem=po;}
                                   po+=1;

                            }
                        }
                        else
                        {
                            tem-=n;
                            for(int i=0;i<n;i++)
                            {
                                a[j][i]=tem;
                                if(i==n-1){po=tem-n;}
                                tem-=1;
                            }
                        }
                    }
                    
                    if(direction=='e')
                    {
                                        for(int i=n-1;i>=0;i--)
                                        {
                                            for(int j=0;j<n;j++)
                                            {
                                                cout<<a[j][i]<<" ";
                                            }
                                            cout<<endl;
                                        }
                    }
                    else
                    {
                         for(int i=0;i<n;i++)
                                        {
                                            for(int j=n-1;j>=0;j--)
                                            {
                                                cout<<a[i][j]<<" ";
                                            }
                                            cout<<endl;
                                        }
                           
                    }
                    
                }
                else
                {
                    ll a[n][n];
                    ll po=n;
                    for(int j=0;j<n;j++)
                    {
                        a[n-1][j]=po;
                        po-=1;
                    }
                    po=n*n;
                    for(int j=n-1;j>=0;j--)
                    {
                        if(j%2==0)
                        {
                            for(int i=0;i<=n-2;i++)
                            {
                                a[i][j]=po;
                                po-=1;
                            }
                        }
                        else
                        {
                            for(int i=n-2;i>=0;i--)
                            {
                                a[i][j]=po;
                                po-=1;
                            }
                        }
                    }
                    if(direction=='w')
                    {
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<n;j++)
                            {
                                cout<<a[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                    }
                    else
                    {
                        for(int j=0;j<n;j++)
                        {
                            for(int i=0;i<n;i++)
                            {
                                cout<<a[i][j]<<" ";
                            }
                            cout<<endl;
                        }
                    }
                }
                
            }
        }
    }
   /*topleft corner*/ 
    void moveupdownlefttc()
    {
        ll a[n][n];ll tem;ll po=0;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                po+=1;
              for(int i=0;i<n;i++ )
              {
                 a[i][j]=po;
                  if(i==n-1){tem=po;}
                  po+=1;
              }
            }
            else
            {
                tem+=n;
                for(int i=0;i<n;i++)
                {
                    a[i][j]=tem;
                    if(i==0){
                        po=tem;
                    }
                    tem-=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
     void movesidewayslefttc()
    {
        ll po=0;ll tem=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                po=tem;
                po+=1;
                for(int j=0;j<n;j++)
                {
                    cout<<po<<" ";
                    po+=1;
                }
                cout<<endl;
            }
            else
            {
                po-=1;
                po+=n;
                for(int j=0;j<n;j++)
                {
                    cout<<po<<" ";
                    if(j==0)
                    {
                        tem=po;
                    }
                    po-=1;
                }
                cout<<endl;
            }
        }
    }
    void sf1()
    {
        ll po=1;ll a[n][n];
        for(int i=0;i<n;i++)
        {
            a[i][0]=po;
            po+=1;
        }
        po=n*n;
        for(int i=0;i<n;i++)
        {
          for(int j=1;j<n;j++)
          {
              a[i][j]=po;
              if(i%2==0){po-=1;}else{po+=1;}
          }
            if(i%2==0){po=po-(n-2);}else{po-=n;}
        }
        
        
        if(direction=='s')
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            
        }
        else
            {
                for(int j=0;j<n;j++)
                {
                    for(int i=0;i<n;i++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
    }
    
    /*topleft corner finished*/
    
    
    /*topright corner*/
    void moveupdownrighttc()
    {
        ll a[n][n];
        vr=n*n;ll tem;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                for(int i=0;i<n;i++)
                {
                    a[i][j]=vr;
                    
                    vr-=1;
                    if(i==n-1){tem=vr;}
                }
            }
            else
            {
                
                for(int i=n-1;i>=0;i--)
                {
                    a[i][j]=tem;
                    tem-=1;
                    if(i==0)
                    {vr=tem;}
                }
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
   
    void movesidewaysrighttc()
    {
        ll k;vr=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                     k=0;
                            vr+=n;
                            for(int j=0;j<n;j++)
                            {
                                cout<<vr-k<<" ";
                                
                                if(j==0){vr=vr-k;}
                                k+=1;
                            }
                    cout<<endl;
            }
            else
            {
                    k=0;
                         vr+=1;
                         for(int j=0;j<n;j++)
                            {
                                cout<<vr+k<<" ";
                                
                                if(j==n-1){vr=vr+k;}
                                k+=1;
                            }
                   cout<<endl;
            }
        }
    }
    
    void sf2()
    {
        ll po=1;ll a[n][n];
        for(int i=0;i<n;i++)
        {
            a[i][0]=po;
            po+=1;
        }
        po=n*n;
        for(int i=0;i<n;i++)
        {
          for(int j=1;j<n;j++)
          {
              a[i][j]=po;
              if(i%2==0){po-=1;}else{po+=1;}
          }
            if(i%2==0){po=po-(n-2);}else{po-=n;}
        }
        if(direction=='s')
        {
            for(int i=0;i<n;i++)
            {
                 for(int j=n-1;j>=0;j--)
                 {
                     cout<<a[i][j]<<" ";
                 }
                cout<<endl;
            }
        }
        else
        {
          for(int j=0;j<n;j++)
          {
              for(int i=n-1;i>=0;i--)
              {
                  cout<<a[i][j]<<" ";
              }
              cout<<endl;
          }
        }
    }
  
    
    /*top right corner finished*/
    
    
   /*all top corners finished*/ 
    
   /*--------------------------------------------------------------*/
    
   /*bottomleftcorner*/
    
    void movesidewaysleftbc()
    {
        ll po=n*n;ll tem;
        for(int i=0;i<n;i++)
        {
            
            if(i%2==0)
            {
               for(int j=0;j<n;j++)
               {
                cout<<po<<" ";
                
                    if(j==n-1)
                    {
                             tem=po;
                    }
                   po--;
               }
                cout<<endl;
            }
            else
            {
                tem-=n;
                for(int j=0;j<n;j++)
                {
                    cout<<tem<<" ";
                    if(j==n-1){po=tem-n;}
                    tem++;
                    
                }
                cout<<endl;
            }
        }
    }
    void moveupdownleftbc()
    {
        ll vr=n;ll a[n][n];ll k;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                k=0;
                for(int i=0;i<n;i++)
                {
                    a[j][i]=vr-k;
                    if(i==0)
                    {
                        vr=vr-k;
                    }
                    k+=1;
                }
            }
            else
            {
                k=0;vr+=1;
                for(int i=0;i<n;i++)
                {
                    a[j][i]=vr+k;
                   
                    if(i==n-1){vr=vr+k;}
                    k+=1;
                     
                }
                vr+=n;
     
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void sf3()
    {
        ll po=1;ll a[n][n];
        for(int i=0;i<n;i++)
        {
            a[i][0]=po;
            po+=1;
        }
        po=n*n;
        for(int i=0;i<n;i++)
        {
          for(int j=1;j<n;j++)
          {
              a[i][j]=po;
              if(i%2==0){po-=1;}else{po+=1;}
          }
            if(i%2==0){po=po-(n-2);}else{po-=n;}
        }
        
        if(direction=='e')
        {
            for(int j=n-1;j>=0;j--)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
    }
    
    /*leftbottom corner over*/
    
    
   /*rightbottom corner*/
    
    void  movesidewaysrightbc()
    {
        ll po=n*n-n+1;ll a[n][n];ll tem;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                for(int i=0;i<n;i++)
                {
                      a[j][i]=po;
                      if(i==n-1){tem=po;}
                       po+=1;
                    
                }
            }
            else
            {
                tem-=n;
                for(int i=0;i<n;i++)
                {
                    a[j][i]=tem;
                    if(i==n-1){po=tem-n;}
                    tem-=1;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    
    void moveupdownrightbc()
    {
        ll po=n*n-n+1;ll a[n][n];ll tem;
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                for(int i=0;i<n;i++)
                {
                      a[j][i]=po;
                      if(i==n-1){tem=po;}
                       po+=1;
                    
                }
            }
            else
            {
                tem-=n;
                for(int i=0;i<n;i++)
                {
                    a[j][i]=tem;
                    if(i==n-1){po=tem-n;}
                    tem-=1;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    void sf4()
    {
        ll po=1;ll a[n][n];
        for(int i=0;i<n;i++)
        {
            a[i][0]=po;
            po+=1;
        }
        po=n*n;
        for(int i=0;i<n;i++)
        {
          for(int j=1;j<n;j++)
          {
              a[i][j]=po;
              if(i%2==0){po-=1;}else{po+=1;}
          }
            if(i%2==0){po=po-(n-2);}else{po-=n;}
        }
        
        
        if(direction=='w')
        {
            for(int j=n-1;j>=0;j--)
            {
                for(int i=n-1;i>=0;i--)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                for(int j=n-1;j>=0;j--)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    
};
int main() {
    solution g;
    g.getinput();
    return 0;
}