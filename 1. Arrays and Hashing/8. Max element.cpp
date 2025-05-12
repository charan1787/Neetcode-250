class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(count==0){
                check=nums[i];
                count=1;
                
            }
            else if(nums[i]==check){
                count++;
            }
            else count--;
        }
        int counter=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==check){
                counter++;
            }
        }
        float f=nums.size()/2;
        if(counter > f) return check;
        else return -1;
    }
};

// https://leetcode.com/problems/majority-element/
// Boye Moore Alorithm

//Take count and check variables.
// check = 1st element
// loop through the elements.
// if elements are not equal to check increment counter else decrement
// if counter == 0 then change check to next element.

// finally loop over the list again to know the count of the check. 
// if > n/2 then print check or else -1

// This is O(n) time complexity and O(1) space complexity
