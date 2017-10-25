class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& findNums, std::vector<int>& nums) {
        std::vector<int> answer;
        for (int item : findNums) {
            auto ItemNextGreaterNumber = std::find_if(
                std::find( std::begin(nums), std::end(nums), item ), 
                std::end(nums), 
                [item] (int temp) { return (temp > item); }
            );
            if ( ItemNextGreaterNumber != std::end(nums) ) {
                answer.push_back( *ItemNextGreaterNumber );
            } else {
                answer.push_back(-1);
            }
        }
        return answer;
    }
};