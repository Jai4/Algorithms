class Solution {
    int slow=0;int fast=0;
public:
     int removeDuplicates(vector<int>& nums) {
        if(nums.empty()==true){return 0;}
        if(nums.size()==1){return 1;}
        while(fast<nums.size())
        {
            if(nums[slow]==nums[fast]){fast+=1;}
            else{slow+=1;nums[slow]=nums[fast];fast+=1; }
        }
        return slow+1;
    }
};