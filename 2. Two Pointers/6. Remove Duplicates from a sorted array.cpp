class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = 0;

        for(j = 0;j<n;j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            } 
        }

        return i+1;

    }
};

// TC : O(n) - only 1 iteration
// SC : O(1) 

// Start from 0 keep i on unique element and j to find the unique element.
// when j != i, we find the new element positioned at j, so we make i+1 as this j element and increment i.
