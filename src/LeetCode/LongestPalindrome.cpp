class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> united;
        if(s.empty()==true){return 0;}
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            united[s[i]]+=1;
        }
        map<char,int>::iterator it;
        bool b=false;
        for(auto it=united.begin();it!=united.end();it++)
        {
            if(it->second%2==0)
            {
                ans=ans+it->second;
            }
            else
            {
                ans=ans+(it->second-1);
                b=true;
            }
        }
        if(b==true)
        {
         ans+=1;
        }
       
        return ans;
        
    }
};