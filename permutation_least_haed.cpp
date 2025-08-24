
class Solution {
public:
    string getPermutation(int n, int k) {
        // Precompute factorials
        vector<int> fact(n+1, 1);
        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i-1] * i;
        }
        
        vector<int> numbers;
        for (int i = 1; i <= n; i++) {
            numbers.push_back(i);
        }
        
        k--; // convert to 0-index
        string result = "";
        
        for (int i = n; i >= 1; i--) {
            int index = k / fact[i-1];
            result += to_string(numbers[index]);
            numbers.erase(numbers.begin() + index);
            k %= fact[i-1];
        }
        
        return result;
    }
};
