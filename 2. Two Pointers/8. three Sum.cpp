class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        if(n<3) {return {};}

        for(int fix = 0;fix <n-2;fix++){

            if(fix > 0 && nums[fix] == nums[fix-1]){
                continue;
                //break;
            }

            if (nums[fix] > 0) break;

            int left = fix + 1;
            int right = n-1;

            while(left < right){
                int check = nums[left] + nums[right];
                if(check + nums[fix] == 0){
                    result.push_back({nums[fix],nums[left],nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }

                
                else if(check + nums[fix] < 0){
                    left++;
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                }
                else {
                    right--;
                    while(left < right && nums[right] == nums[right + 1]){
                    right--;
                }
                }        
            }
            
        }
        return result;

        
    }
};

# TC - O(n^2)
# SC - O(1)

# Here understand that we need to do i++, j-- after pushing the vector answer. 
# We have to skip duplicats whenever we increment or decrement. So we added while loops at 4 places.
