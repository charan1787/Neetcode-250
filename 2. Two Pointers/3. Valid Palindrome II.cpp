class Solution {
public:
    bool skip=false;
    int loop(string s,int p,int q){

        while(p<q){
            if(s[p]!=s[q]){
                if(skip) return false;
                skip=true;
                return loop(s,p+1,q) || loop(s,p,q-1);
            }
            else{
            p++;
            q--;
            }
        }
        return 1;
      
    }
    
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        return loop(s,i,j);
    }
};

// https://leetcode.com/problems/valid-palindrome-ii/
// left , right pointers
// loop till they match
// if mismatch try substring left+1, right and left, right -1
