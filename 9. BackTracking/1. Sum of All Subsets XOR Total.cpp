class Solution {
public:
    int subsetXORSum(vector<int>& nums) {

        return dfs(0,0,nums);
    }

    int dfs(int i,int total,vector<int>& nums){
            if(i==(nums.size())) return total;

            return dfs(i+1,total ^ nums[i],nums) + dfs(i+1,total,nums);
        }
};


// Understand how the helper funtion is written outside.

// ^ is the XOR operation symbol

// https://www.youtube.com/watch?v=LI7YR-bwNYY

// TC is O(2^n) 
