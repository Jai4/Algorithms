#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double d;
typedef pair<d,d> pd;
typedef vector<pd> vpd;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
ll un[100][100]={0};
class squarecircle
{
    d w,h,xc,yc,r,xleft,xright,ylow,yhigh,temp,mx,my,r1,r2,r3,r4,rr1,rr2,rr3,rr4,x1,y1,x2,y2,x3,y3,x4,y4,xsleft,xsright;
    d yslow,yshigh,za1,za2,za3,za;ll n1=0;ll n2=1;ll count=0;bool zf=false;
    vpd qw;pd e1,e2;
    public:
    void getinp()
    {
        cin>>w>>h;
        cin>>xc>>yc>>r;
        ylow=yc-r;yhigh=yc+r;xleft=xc-r;xright=xc+r; 
        if(ylow>=0){if(ylow<h){ylow=ylow;}else{ylow=h-1;}}else{ylow=0;}
        if(yhigh<h){if(yhigh>=0){yhigh=yhigh;}else{yhigh=0;}}else{yhigh=h-1;}
        if(xleft>=0){if(xleft<w){xleft=xleft;}else{xleft=w-1;}}else{xleft=0;}
        if(xright<w){if(xright>=0){xright=xright;}else{xright=0;}}else{xright=w-1;}
        for(ll i=ylow;i<=yhigh;i++)
        {
            for(ll k=xleft;k<=xright;k++)
            {
                temp=pow(xc-k,2)+pow(yc-i,2);
                temp=sqrt(temp);
                if(temp<=r){un[i][k]=-1;}
            }
        }
        //square
        cin>>x1>>y1>>x3>>y3;
        mx= (x1+x3)/2; my=(y1+y3)/2; r1=(x1-mx);r2=(y1-my);r3=(x3-mx);r4=(y3-my);
        rr1=-r2;rr2=r1;rr3=-r4;rr4=r3;x2=mx+rr1;y2=my+rr2;x4=mx+rr3;y4=my+rr4;
        qw.pb(mp(x1,y1));qw.pb(mp(x2,y2));qw.pb(mp(x3,y3));qw.pb(mp(x4,y4));qw.pb(mp(x1,y1));
        
        //cout<<x2<<" "<<y2<<" "<<x4<<" "<<y4<<endl;
        
        xsleft=MIN(x1,MIN(x2,MIN(x3,x4)));xsright=MAX(x1,MAX(x2,MAX(x3,x4)));
        yslow=MIN(y1,MIN(y2,MIN(y3,y4)));yshigh=MAX(y1,MAX(y2,MAX(y3,y4)));
        
        //cout<<xsleft<<" "<<xsright<<" "<<yslow<<" "<<yshigh;
        
        if(yslow>=0){if(yslow<h){yslow=yslow;}else{yslow=h-1;}}else{yslow=0;}
        if(yshigh<h){if(yshigh>=0){yshigh=yshigh;}else{yshigh=0;}}else{yshigh=h-1;}
        if(xsleft>=0){if(xsleft<w){xsleft=xsleft;}else{xsleft=w-1;}}else{xsleft=0;}
        if(xsright<w){if(xsright>=0){xsright=xsright;}else{xsright=0;}}else{xsright=w-1;}
        
         //cout<<xsleft<<" "<<xsright<<" "<<yslow<<" "<<yshigh;
        
        for(ll i=yslow;i<=yshigh;i++)
        {
            for(ll k=xsleft;k<=xsright;k++)
            {
                for(ll gh=0;gh<4;gh++)
                {
                    e1=qw.at(n1);e2=qw.at(n2);
                    za1= (k*(e1.second-e2.second)); za2=(i*(e1.first-e2.first)); za3=((e1.first*e2.second)-(e1.second*e2.first));
                    za=za1-za2+za3;n1=n1+1;n2=n2+1;
                    if(za!=0)
                    {
                        if(za>0){count=count+1;}else{count=count-1;}
                    }
                    else
                    {
                        un[i][k]=-1;
                        zf=true;
                    }
                }
                if(zf==false)
                {
                    if((count==4)||(count==-4))
                    {
                        un[i][k]=-1;
                    }
                }
                count=0;n1=0;n2=1;zf=false;
            }
        }
        //printing
        forn(i,0,h)
        {
         forn(k,0,w)
          {
             if(un[i][k]==0)
             {
                 cout<<".";
             }
             else
             {
                 cout<<"#";
             }
          }
          cout<<endl;
        }
    }
};

int main(){
    squarecircle g;
    g.getinp();
    return 0;
}