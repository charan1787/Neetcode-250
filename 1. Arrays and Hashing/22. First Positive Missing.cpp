class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool one=false;
for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 1) one = true;
    if (nums[i] < 1 || nums[i] > nums.size()) nums[i] = 1;
}

        if(one==false) return 1;

        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]>0)  nums[abs(nums[i])-1]=nums[abs(nums[i])-1]*-1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) return i+1;
        }
        return nums.size()+1;
    }
};

// solution lies between [1 to n+1]
// check if 1 is present if not present then ans is 1 else 
// modify all the numbers < 1 and > n to 1 then becuase those numbers are useless
// Use same array for counting the numbers
// Not intutive

// https://www.youtube.com/watch?v=lyjOwaUEWWQ&t=509s
