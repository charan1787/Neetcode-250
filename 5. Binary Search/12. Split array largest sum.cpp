class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int min_cap = 0;
        int max_cap = 0;
        int ans = max_cap;

        for(int num : nums){
            min_cap = max(min_cap,num);
            max_cap += num;
        }

        while(min_cap <= max_cap){
            int mid_cap = min_cap + (max_cap - min_cap)/2;
            int mid_k = helper(nums,mid_cap);

            if(mid_k <= k){
                ans = mid_cap;
                max_cap = mid_cap - 1;
            }
            else{
                min_cap = mid_cap + 1;
            }
        }

        return ans;
    }

    int helper(vector<int>& nums, int capacity){
        int mid_day = 1;
        int count_sum = 0;
        for(int w :nums){
            if(w + count_sum > capacity){
                mid_day++;
                count_sum = w;
            }
            else count_sum += w;
        }

        return mid_day;
    }
};

// Same solution as ships in d days (1011 leetcode) or koko eating banans

// hard part is to identify the solution as of similar pattern here.

// 100% same solution to 1011 leetcode.
