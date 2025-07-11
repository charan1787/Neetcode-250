class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        helper(candidates,0, 0,target);
        return ans;
    }

    void helper(vector<int>& candidates,int i,int sum, int target){
        if(sum == target){
          ans.push_back(temp);
          return;
        }

        if(i==candidates.size() || sum >target){
            return;
        }

        temp.push_back(candidates[i]);
        sum = sum + candidates[i];
        helper(candidates,i+1,sum,target);
        temp.pop_back();
        sum = sum - candidates[i];
        while(i+1 < candidates.size() && candidates[i] == candidates[i+1]){
            i++;
        }
        helper(candidates,i+1,sum,target);
    }
};


// Same as Combination sum but with out repetetion of numbers but may contain repetetive numers in array

// so code same as combination sum + add while loop 
