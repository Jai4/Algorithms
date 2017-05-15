class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(unsigned int i=0;i<nums.size();i++)
        {
            x=x^nums.at(i);
        }
        return x;
    }
};