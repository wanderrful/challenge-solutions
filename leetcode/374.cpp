// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int cur = (1 + n) >> 1;
        int t;
        int step = cur;
        do{
            t = guess(cur);
            step = step >> 1 ? step  >> 1 : 1;
            cur += t*step;
        } while(t != 0);
    
        return cur;
    }
};