class Solution {
    
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();vector<int> ans(n,0);int index;
        for(unsigned int i=0;i<n;i++)
        {
            index=(i+k)%n;
            ans[index]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=ans[i];
        }
    }
};