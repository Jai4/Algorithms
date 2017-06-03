class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();int tem,t;
        if(n==0){return 0;}
        vector<int> index,val;
        int length=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                index.push_back(0);
                val.push_back(nums[0]);
            }
            else
            {
            tem=nums[i];
                if(tem>nums[index[length]])//current element is greater than the minimum element of the longest subsequence till now
                {
                    length+=1;
                    index.push_back(i);
                    val.push_back(nums[i]);
                }
                else if(tem<nums[index[0]])//current element is the least element seen till now
                {
                    index[0]=i;
                    val[0]=nums[i];
                }
                else
                {
                    t=std::lower_bound(val.begin(),val.end(),tem)-val.begin();
                    index[t]=i;
                    val[t]=nums[i];
                }
            }
        }
        return length+1;
        
    }
};