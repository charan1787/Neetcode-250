class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int n : nums) {
            s.insert(n);
        }

        if (s.size() < nums.size())
            return true;
        return false;
    }
};

// https://leetcode.com/problems/contains-duplicate/
// Create Unordered set - add elements - compare the size
