class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        for (char &letter : s) {
            auto it = std::find( std::begin(t), std::end(t), letter );
            if (it != std::end(t)) { t.erase(it); }
        }
        return t.at(0);
    }
};