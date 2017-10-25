class Solution {
public:
    int addDigits(int num) {

        std::vector<int> v{0};
        while (num != 0)
        {
            v.push_back(num % 10);
            num /= 10;
        }

        //iterate through the string
        int result = std::accumulate(v.begin(), v.end(), 0);
        
        if (result < 10) { return result; }
        else { return addDigits(result); }
    }
};