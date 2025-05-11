class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int hasha[26]={0};
        
        if(s.size()!=t.size()){
            return false;
        }

        for(char c:s){  
            hasha[c-'a']++; 
        }

        for(char c:t){
            hasha[c-'a']--;
        }

        for(int i=0;i<26;i++){
            if(hasha[i]!=0) return false;
        }

        return true;
    }
};

// https://leetcode.com/problems/valid-anagram/
// Take a hash array 
// store the frequency of string A
// Negate the frequency looping onother string B
// If any numbers - false else true
