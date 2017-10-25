class Solution {
public:
    string reverseString(string s) {
        string result;
        std::copy(s.rbegin(), s.rend(), std::back_inserter(result));
        return result;
    }
};