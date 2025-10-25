class Solution {
public:
    int romanToInt(string s) {
            map<char, int> roadmap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        // Handle empty string case
        if (s.empty()) {
            return 0;
        }

        int result = roadmap[s.back()];
        
        // Loop from the second-to-last character to the beginning
        for (int i = s.length() - 2; i >= 0; i--) {
            int current = roadmap[s[i]];
            int nextval = roadmap[s[i+1]];
            
            // Apply the Roman numeral rule
            if (current < nextval) {
                result -= current;
            } else {
                result += current;
            }
        }
        
        return result;
    }
};