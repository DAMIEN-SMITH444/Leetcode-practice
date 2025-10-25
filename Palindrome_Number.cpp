class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) {
            return false;
        }
    int original = x;
     int ans = 0;
     while(x!=0){
        int digit = x%10;   
        ans = ans*1l*10 + digit ;
        x /= 10;
     }
    return (original==ans);
    }
};