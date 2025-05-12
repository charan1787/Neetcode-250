class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        if(nums.size()==0) return 0;
        for(int index=0;index<nums.size();index++){
            if(val!=nums[index]){
                nums[k++]=nums[index];
                //k++;
            }
        }
      return k;
    }
};


// https://leetcode.com/problems/remove-element/
// Take a pointer at 0
// loop every element
// if element not equal to val -> change the kth index element to current ith element and do k++

// see how we can use 2 pointers and change the elements
