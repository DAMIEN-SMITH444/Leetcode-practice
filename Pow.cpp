class Solution {
public:
    double myPow(double x, int n) {
        long long power = n; // use long long to safely handle INT_MIN
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double result = 1.0;
        while (power > 0) {
            if (power % 2 == 1) result *= x; // if odd, multiply once
            x *= x;                           // square x
            power /= 2;                       // halve the exponent
        }
        return result;
    }
};
