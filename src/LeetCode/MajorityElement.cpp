class Solution {
    map<int,int> k;int n;
public:
    int majorityElement(vector<int>& nums) {
        n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            k[nums.at(i)]+=1;
            if(k[nums.at(i)]>n/2)
            {
                return nums.at(i);
                
            }
        }
    }
};