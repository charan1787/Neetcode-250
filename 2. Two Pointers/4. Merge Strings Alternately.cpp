class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();

        int i=0,j=0;

        string word3="";

        while(i<n1 && j<n2){
            word3.push_back(word1[i++]);
            word3.push_back(word2[j++]);
        }

        if(i<n1){
            while(i<n1){
            word3.push_back(word1[i++]);
            }
        }
        if(j<n2){
            while(j<n2){
            word3.push_back(word2[j++]);
            }
        }

        return word3;
    }
};

// Loop till min length of 2 string first
// add alternatively the elements

// Use a while loop instead of for loop.

// https://leetcode.com/problems/merge-strings-alternately/
