class Solution {
    int sum=0;int g,s,f;
public:
    int fg(int a)
    {
        sum=0;
        while(a!=0)
        {
        g=a%10;
        sum=sum+ g*g;
        a=a/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        s=f=n;
        do{
        s=fg(s);
        f=fg(f);
        f=fg(f);
        }while(s!=f);
        if(s==1){return true;}
        else{return false;}
    }
};