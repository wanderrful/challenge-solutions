#include <utility>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> answer;
        
        
        
        for (int i = 0; i < nums.size() && answer.size() == 0; ++i) {
            for (int j = 0; j < nums.size() && answer.size() == 0; ++j) {
                if ( nums[i] + nums[j] == target  && i != j) {
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        
        
        
        return answer;
    }
};