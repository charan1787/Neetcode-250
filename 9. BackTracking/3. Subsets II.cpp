class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        help(nums,0);
        return ans;
    }

    void help(vector<int>& nums,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        help(nums,i+1);
        temp.pop_back();
        while(i + 1 < nums.size() && nums[i]==nums[i+1])
            {i++;}
        help(nums,i+1);
        
    }
};

// https://leetcode.com/problems/subsets-ii/

// same as subset question but the while loop is used to skip the same elements

// and sort the nums array before using it.
