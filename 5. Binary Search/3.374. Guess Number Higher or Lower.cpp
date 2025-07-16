class Solution {
public:
    int guessNumber(int n) {
        return helper(n,1,n);
    }

    int helper(int n,int i,int j){

       if(i>j) return -1;
        long int mid = i + (j-i)/2;
        int num = guess(mid);
        if(num == 0) return mid;
        else if(num == 1) return helper(n,mid+1,j);
        else return helper(n,i,mid-1);

        //return -1;
}

};

// https://leetcode.com/problems/guess-number-higher-or-lower/
