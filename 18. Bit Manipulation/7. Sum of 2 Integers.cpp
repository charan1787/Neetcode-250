class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int carry_without = a ^ b;
            int carry = (a & b) << 1;
            a = carry_without;
            b = carry;
        }
        return a;
    }
};

// If only positive int we can use while condition as b > 0

// but for negative integers the b converges from left. So we need to use b!=0
