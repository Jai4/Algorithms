class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lp=0;int hp=numbers.size()-1;vector<int> ans;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[lp]+numbers[hp]==target)
            {
                ans.push_back(lp+1);ans.push_back(hp+1);
                break;
            }
            else if(numbers[lp]+numbers[hp]<target)
            {
                lp++;
            }
            else if (numbers[lp]+numbers[hp]>target)
            {
                hp--;
            }
        }
        return ans;
    }
};