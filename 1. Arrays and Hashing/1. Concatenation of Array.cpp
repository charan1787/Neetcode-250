class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(),nums.begin(),nums.end());
        return nums;
    }
};


// Link : https://leetcode.com/problems/concatenation-of-array/
" vector.insert(position, new-vec-start, new-vector-end) " 
