class Solution {
public:
    int divide(int dividend, int divisor) {
         if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;

        // Handle division normally
        if (divisor != 0)
            return dividend / divisor;

        // Optional: handle divisor = 0 case
        return 0;
    }
};