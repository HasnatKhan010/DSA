class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        std::string original = std::to_string(x);
        std::string reversed = original;
        std::reverse(reversed.begin(), reversed.end());
        return original == reversed;
    }
};
