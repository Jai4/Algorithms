

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fp=1;int bp=1;int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            fp*=nums[i];
            bp*=nums[(n-1-i)];
            ans=max(ans,max(fp,bp));
             fp = fp == 0 ? 1 : fp;
  		      bp = bp == 0 ? 1 : bp;
        }
        return ans;
    }
};