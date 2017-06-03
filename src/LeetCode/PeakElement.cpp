class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;int high=nums.size()-1;int mid;
        while(low<=high)
        {
            if(low==high){break;}
            mid=((high-low)/2)+low;
            if(nums[mid]<nums[mid+1]){low=mid+1;}
            else{high=mid;}
            
        }
        return low;
    }
};