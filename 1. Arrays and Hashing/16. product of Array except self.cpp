class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        size_t s=nums.size();
        int multiply=1;
        int count=0;
        for(int i=0;i<s;i++){
            if(nums[i]==0) {
                count++;;
                continue;}
            multiply=multiply*nums[i];
        }

        if(count == nums.size()) return nums;
        
        vector<int> answer;
        for(int i=0;i<s;i++){
           if(nums[i]==0){
            if(count==1){
                answer.push_back(multiply);
            }
            else answer.push_back(0);
           }
           else {
            if(count>0) answer.push_back(0);
            else answer.push_back(multiply/nums[i]);
           }
           
           
        }
        return answer;
    }
};

// https://leetcode.com/problems/product-of-array-except-self/
// Multiply every element store it.
// Make a new vector - insert each element by dividing the m with nums(i) 
// The note is that if we haev single zero and more than 1 zeros. 
