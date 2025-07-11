class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        
        helper(nums,0);
        return ans;
    }
    vector<int> temp;
    void helper(vector<int>& nums, int i){
       
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        helper(nums,i+1);
        temp.pop_back();
        helper(nums,i+1);
    }

    
};

// initialised temp and ans as common variuable outside function or else you have to give input to each call if you initialise inside

// https://leetcode.com/problems/subsets/
