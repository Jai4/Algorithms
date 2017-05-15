int comp(string x,string y)
{
    string g=x.append(y);
    string t=y.append(x);
    return g.compare(t)>0 ? 1:0 ;
}

class Solution {
    vector<string> a;int tem;string ans;
public:
    string largestNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            
            a.push_back(to_string(nums.at(i)));
        }
        sort(a.begin(),a.end(),comp);
        for(int i=0;i<a.size();i++)
        {
            ans=ans+a.at(i);
        }
        if(ans.at(0)=='0'){ans='0';return ans;}
        return ans;
    }
};