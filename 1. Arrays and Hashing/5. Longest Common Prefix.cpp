class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        size_t min_length=INT_MAX;
        for(int i=0;i<strs.size();i++){
            min_length=min(min_length,strs[i].length());
        }
        int i=0;
        while(i < min_length){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=strs[0][i]){
                    return strs[0].substr(0,i);
                }
            }
            i++;
        }

        return strs[0].substr(0,min_length);
    }
};

// https://leetcode.com/problems/longest-common-prefix/
// loop till minimum length of string.
// match all the elemnets of all strings to the 1st string 
// if not equal anywhere rerturn the substring till before.

// size_t is used for store the size numbers. 
// str.substr(start,end) -> (inclusive,exclusive)
