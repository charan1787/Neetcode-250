class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> store;
        int sum=0;
        int ans=0;
        for(int num:nums){
            sum+=num;
            if(sum==k){
                ans++;
            }
            if(store[sum-k]) { // we cant use else becuase if there is a sub array with sum 0, we can add to any answer array.
                ans=ans+store[sum-k];
            }
            store[sum]++;
        }

        return ans;
    }
};

// https://leetcode.com/problems/subarray-sum-equals-k/
// _,B,_,_,_,A,_

// Take 7 space list
// A,B are pointers

// A sum - required = B sum

// Take a map store all the sum of array
// check if A sum - required exists for every loop. if yes increase ans++;
