class Solution {
public:
    std::string RowOne {"qwertyuiop"};
    std::string RowTwo {"asdfghjkl"};
    std::string RowThree {"zxcvbnm"};
    
    bool bStringContains(char &needle, std::string haystack) {
        return haystack.find(std::tolower(needle)) != std::string::npos;
    }

    bool bIsEligible(std::string word) {
        std::string ValidRow {""};
        
        for (char &letter : word) {
            if (ValidRow == "") { //if we haven't identified a row yet, then figure it out
                ValidRow = bStringContains(letter, RowOne) ? RowOne : (
                    bStringContains(letter, RowTwo) ? RowTwo : (
                        bStringContains(letter, RowThree) ? RowThree : ValidRow
                    )
                );
            }
            else if (!bStringContains(letter, ValidRow)) {
                return false;
            }
        }
        
        return true;
    }

    
    
    vector<std::string> findWords(vector<std::string>& words) {
        std::vector<string> answer;
        
        for (std::string word : words) {
            if ( bIsEligible(word) ) {
                answer.push_back(word);
            }
        }
        
        return answer;
    }