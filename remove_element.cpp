class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> result;
        
        for (int x : nums) {
            if (x != val) {
                result.push_back(x);
            }
        }
        
        // Copy back into nums
        for (int i = 0; i < result.size(); i++) {
            nums[i] = result[i];
        }
        
        return result.size(); // new length
    }
};