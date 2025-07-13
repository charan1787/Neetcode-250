
class Solution {
public:
vector<vector<int>> ans;
vector<int> temp;
vector<bool> used;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        used.resize(nums.size(),false);

        helper(nums);
        return ans;
    }

    void helper(vector<int>& nums){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }


        for(int i = 0;i<nums.size();i++){
            if(used[i]) continue;


            if(i>0 && nums[i] == nums[i-1] && !used[i-1]){
                continue;
            }

            temp.push_back(nums[i]);
            used[i]=true;
            helper(nums);

            temp.pop_back();
            used[i]=false;
        }
    }
};

// https://leetcode.com/problems/permutations-ii/

// Same as permutaion 1

       //     if(i>0 && nums[i] == nums[i-1] && !used[i-1]){
         //       continue;
        //    }
				//		
					//	!used[i-1] is the key here. if you consider 1,1,2 brach in the tree. for 2nd 1 the condition nums[i] == nums[i-1] comes true and the bracnh terminates.
						
					//	to ignore that we make sure to use used[i-1] is false;
