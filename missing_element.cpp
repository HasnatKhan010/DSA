class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = len * (len + 1) / 2; 
        int ori_sum = 0;                

        for (int val : nums) {
            ori_sum += val;
        }

        return sum - ori_sum; 
    }
};
