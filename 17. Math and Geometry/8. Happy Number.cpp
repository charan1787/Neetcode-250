class Solution {
private:
    int nextNum(int num){
        int sum = 0;
        while(num > 0){
        sum = sum + ((num%10) * (num%10));
        num = num/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = nextNum(n);
        while(fast != 1 && fast!=slow){
            fast = nextNum(nextNum(fast));
            slow = nextNum(slow);
        }

        return fast == 1;
    }
};

// calculate sum of of squares in a seperate funciton

// this sum will once again come if the number is not converging to 1, so there will be a loop if it not converges.

// use floyd warshall, tortoise and rabbit. 

