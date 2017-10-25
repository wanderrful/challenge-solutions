class Solution {
public:
    int getSum(int a, int b) {
        #include <vector>
        
        std::vector<int> v;
        
        v.push_back(a);
        v.push_back(b);
        
        int result = std::accumulate(v.begin(), v.end(), 0);
        
        return result;
    }
};