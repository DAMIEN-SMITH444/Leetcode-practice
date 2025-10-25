class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
   vector<int> temp;
        int carry = 1; // start with 1 because we are adding 1

        for(int i = digits.size() - 1; i >= 0; i--){
            int sum = digits[i] + carry;
            temp.push_back(sum % 10);
            carry = sum / 10;
        }

        // if carry is still left
        if(carry){
            temp.push_back(carry);
        }

        // reverse the vector to get the correct order
        reverse(temp.begin(), temp.end());
        return temp;
    }
};