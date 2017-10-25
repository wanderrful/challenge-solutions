class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> answer;
        for (int i = 1; i <= n; ++i) {
            std::string item;
            if (i%3 == 0) { item.append("Fizz"); }
            if (i%5 == 0) { item.append("Buzz"); }
            if (item == "") { item.append(std::to_string(i)); }
            answer.push_back(item);
        }
        return answer;
    }
};