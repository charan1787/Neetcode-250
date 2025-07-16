class Solution {
public:

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum =0;
        for( int i : nums){
            sum = sum + i;
        }

        if(sum%k != 0) return false;
        int length = sum / k;

        for( int i : nums){
           if(i > length) return false;
        }
        vector<int> summ(k,0);
        sort(nums.rbegin(),nums.rend());
        return helper(nums,k,0,summ,length);
         
    }


    bool helper(vector<int>& nums, int k,int i,vector<int>& summ,int length){

        if(i == nums.size()){
            for(int k = 0;k<summ.size();k++){
                if(summ[k]!=length) return false;
            }

            return true;
        }


        for(int index = 0 ;index < k;index++){
            if(summ[index] + nums[i] > length) continue;
            summ[index] = summ[index] + nums[i];
            if(helper(nums,k,i+1,summ,length)) return true;
            summ[index] = summ[index] - nums[i];
            if(summ[index] == 0) return false;
        }

        return false;
    }
};

// https://leetcode.com/problems/partition-to-k-equal-sum-subsets/description/

// Same as matchsticks to square problem
