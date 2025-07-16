class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int sum = 0;
        for(int i=0;i<matchsticks.size();i++){
            sum = sum + matchsticks[i];
        }

        if(sum%4 != 0) return false;

        int s_length = sum / 4;

        for(int i=0;i<matchsticks.size();i++){
            if(matchsticks[i] > s_length){
                return false;
            }
        }
        vector<int> sides(4,0);

        return helper(matchsticks,s_length,sides,0); 
    }

    bool helper(vector<int> & nums,int length, vector<int> & sides,int i){
        if(i == nums.size()){
            if(sides[0] == length && sides[1] == length && sides[2] == length && sides[3] == length) return true;
            else return false;
        }

        for(int j = 0;j<4;j++){

            if(sides[j] + nums[i] > length) continue;

            sides [j] = sides[j] + nums[i];

            if(helper(nums,length,sides,i+1)) return true;

            sides[j] = sides[j] - nums[i];

            if(sides[j] == 0) return false; 
        }


        return false;
    }
};

// https://leetcode.com/problems/matchsticks-to-square/

// if(sides[j] == 0) return false;  

// when the sizes array is like [2 2 1 0] in some iteration and we are at nums [i] == 2 and trying to add this number

// so we add this to 2 then 2 then 1 then 0

// we know 4th number is zero when we are at number 1 (3rd place) 

// after poping the number if the sizes[i] is zero its the same result when added to 4th number which is also 0. 

// as 3rd, 4th results the same we use this if condition to prune the tree

