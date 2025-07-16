class Solution {
public:
    int mySqrt(int x) {
        long long int num = 1;
        if(x < 0) return -1;
        if(x == 0) return 0;
        while(num <= x){
            if(num * num < x){
                num++;
            }
            else if(num * num == x){
                return num;
            }
            else return num - 1;
        }

        return -1;
    }
};
