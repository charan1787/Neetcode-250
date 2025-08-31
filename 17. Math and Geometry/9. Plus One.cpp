class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;

    }
};

// if the digit is less than 9 add +1, else change it to zero and move to next digit.

// Finally add 1 to the digits, here all will be zero.

// TC - O(n)
// SC - O(1)
