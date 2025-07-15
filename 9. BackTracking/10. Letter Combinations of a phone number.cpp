class Solution {
public:
    vector<string> ans;
    string temp;
    vector<string> letterCombinations(string digits) {
        if(digits == ""){
            return ans;
        }
        unordered_map<char, string> mp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};



        helper(0,digits,mp);

        return ans;

    }

    void helper(int index, string digits,unordered_map<char,string> mp){
        if(index == digits.size()){
            ans.push_back(temp);
            return;
        }

        char c = digits[index];
        string s =  mp[c];


        for(int i = 0; i < s.size();i++){

            temp.push_back(s[i]);
            helper(index+1,digits,mp);
            temp.pop_back();
        }
    }
};

// https://www.youtube.com/watch?v=vgnhZzw-kfU

// use a map 

// same template of backtracking
