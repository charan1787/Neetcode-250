class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> ans;

        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(ans.find(need)!=ans.end()){
                    return {i,ans[need]};
            }
            ans[nums[i]]=i;
        }

        return {};
    }
};


// https://leetcode.com/problems/two-sum/
// take unordered map
// find the other pair of element - if found return both i's
// else add this pair 

// map operations - find() and end()
// in map operations if element not found it return end of map i.e ans.end()
