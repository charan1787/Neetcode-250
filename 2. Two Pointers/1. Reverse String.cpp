class Solution {
public:
    void reverseString(vector<char>& s) {

        //reverse(s.begin(),s.end());

        int i=0,j=s.size()-1;

        while(i<j){
            char str=s[i];
            s[i]=s[j];
            s[j]=str;

            i++;
            j--;
        }
    }
};

// https://leetcode.com/problems/reverse-string/
// Swapping elements
