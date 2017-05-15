class Solution {
    int first=0;int last;
public:
    int removeElement(vector<int>& nums, int val) {
        last=nums.size()-1;
        if(first==last){if(nums[0]==val){return 0;}else{return 1;}}
        while(first<=last)
        {
            if(nums[first]!=val)
            {
                first+=1;
                
            }
            if(nums[first]==val)
            {
                if(nums[last]!=val)
                {
                    nums[first]=nums[last];
                    last-=1;
                    first+=1;
                }
                else
                {
                    while(nums[last]==val)
                    {
                        last-=1;
                        if(last==first){break;}
                    }
                    
                }   
                
            }
       }
       return first;
    }
};