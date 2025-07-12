class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<vector<int>> permute(vector<int>& nums) {
        helper( nums);
        return ans;
    }

    void helper(vector<int> nums){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }
     
        for(int i=0;i<nums.size();i++ ){
            if(find(temp.begin(),temp.end(),nums[i]) != temp.end()){
                continue;
            }
            temp.push_back(nums[i]);
            helper(nums);
            temp.pop_back();
           
        }
    }
};

// https://leetcode.com/problems/permutations/
