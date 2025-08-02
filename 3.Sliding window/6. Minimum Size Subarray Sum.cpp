class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int sum = 0;
        int min_size = INT_MAX;

        while(j < nums.size()){
            sum = sum + nums[j];
            while(sum >= target){
                min_size = min(min_size,j + 1 - i);
                sum = sum - nums[i];
                i++;
            }
            j++;
        }

        if(min_size == INT_MAX) return 0;
        else return min_size;
        //return min_size;
    }
};
