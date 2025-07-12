class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<vector<int>> combine(int n, int k) {
        helper(0,n,k);

        return ans;

    }

    void helper(int i,int n,int k){
        if(i==n){
            if(temp.size()==k){
                ans.push_back(temp);
            }
            return;
        }
        if(temp.size() > k){
           return;
        }
        temp.push_back(i+1);
        helper(i+1,n,k);
        temp.pop_back();
        helper(i+1,n,k);
    }
};

// https://leetcode.com/problems/combinations/
// Same as SUbsets problem 

// add only when temp size is equal to k

// if temp.pize>k return
