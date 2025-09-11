class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;

        for(int i = 0;i < n;i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }

        for(auto p : mp){
            res.push_back(p.second);
        }
        return res;
    }
};

// Make a key value pair for each word.

// key is the sorted variation of the word. so now all anagrams has same key.

// Note : 

// check Iterating over a map

// TC - Sorting 1 string takes klogk time so n strings take N*K*logK time

// SC - res takes O(N * K) space 
//    - mp takes O(N * K) space (as both are storing same number of string)
//    - sorting takes O(log K) space
//    - all together O(N * K) space
