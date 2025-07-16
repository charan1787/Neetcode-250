class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        return helper(0,nums.size()-1,nums,target);

    }

    int helper(int i,int j,vector<int>& nums, int target){
        while(i<=j){
            int mid = (i + j)/2;
            if(nums[mid] == target) return mid;
            if(target > nums[mid]) return helper(mid+1,j,nums,target);
            else return helper(i,mid-1,nums,target);
        }

        return -1;
    }
};

// https://leetcode.com/problems/binary-search/
