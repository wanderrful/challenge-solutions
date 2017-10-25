#include <cmath>

class Solution {
public:
    bool isPerfectSquare(int num) {
        float squareRoot = std::pow(static_cast<float>(num), 0.5) ;
        
        float remainder = squareRoot - std::floor(squareRoot);
        
        return (remainder == 0.0);
    }
};