class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() -1;

        while(i <= j){
            if(nums[i] == target) return i;
            if(nums[j] == target) return j;
            int mid = i + (j-i)/2;
            if(nums[mid] == target) return mid;
            if(nums[i] < nums [mid]){
                if(nums[i] <= target && target < nums[mid]){
                    j = mid -1;
                }
                else {
                    i = mid + 1;
                }
            }
            else{
                if(nums[mid] < target && target <= nums[j]){
                    i = mid + 1;
                }
                else {
                    j = mid - 1;
                }
            }
        }

        return -1;
    }
};

// https://leetcode.com/problems/search-in-rotated-sorted-array/

// check if left sorted or right sorted

// then do binary search on sorted one
