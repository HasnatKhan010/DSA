class Solution {
public:
    vector<vector<int>> ans;
    
    void backtrack(vector<int>& candidates, int target, vector<int>& current, int start) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        if (target < 0) return; 
        
        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]); 
            backtrack(candidates, target - candidates[i], current, i); 
            current.pop_back(); 
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        backtrack(candidates, target, current, 0);
        return ans;
    }
};