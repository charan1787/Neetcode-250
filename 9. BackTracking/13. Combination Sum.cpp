class Solution {
public:
vector<vector<int>> ans;
vector<int> temp;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        helper(candidates,0,0,target);
        return ans;
    }

    void helper(vector<int>& nums, int i,int sum,int target){
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        if(i == nums.size()|| sum > target){

            //ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        sum = sum + nums[i];
        helper(nums,i,sum,target);
        temp.pop_back();
        sum = sum - nums[i];
        helper(nums,i+1,sum,target);
        
    }
};

// https://leetcode.com/problems/combination-sum/
// First use the same solution method as subset problem

// Establish the condition for if sum == target push temp to ans

// then see how you can use the duplicate iteration

// use sum,temp in the recursion
