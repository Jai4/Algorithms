class Solution {
public:
    int reverse(int x) {
        long long a=0;
        while(x!=0)
        {
            a=a*10 + x%10;
            x=x/10;
        }
        if((a<INT_MIN)||(a>INT_MAX))
        {
            return 0;
        }
        return a;
    }
};