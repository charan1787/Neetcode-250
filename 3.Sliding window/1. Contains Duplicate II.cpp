class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0, j = 0;
        unordered_set<int> s;
        while(j<=nums.size()-1){
            if(abs(j-i) > k){
                s.erase(nums[i]);
                i++;
            }
            else if(s.find(nums[j])!=s.end()){
                return true;
            }
            else{
                s.insert(nums[j]);
                j++;
            }
        }

        return false;
    }
};

// Maintain a window k

// taake a set

// - pop id size > k
// - return true if element found in set
// - insert element
