class Solution {
public:
    vector<vector<string>> ans;
    vector<string> temp;
    vector<vector<string>> partition(string s) {
        helper(s,0);
        return ans;
    }

    void helper(string &s,int index){
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }

        for(int end = index; end < s.size();end ++){
            if(ispalindrome(s,index,end)){
                temp.push_back(s.substr(index,end-index+1));
                helper(s,end+1);
                temp.pop_back();
            }
        }
    }

    bool ispalindrome(string &s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
};

// Splitting the initial string to 0,1,2,3,-- partitions

// check if the initial string is palidrome, back track to remaining 

// here taking the index as the starign point and giving it to back track fucntion 

// end will be the variable that starts from index and goes on till end
