class Solution {
public:
unordered_set<char,int> s;
    bool isAlienSorted(vector<string>& words, string order) {

                
        unordered_map<char,int> s;
        for(int i = 0; i < order.length();i++){
            s[order[i]] =i;
        }

        for(int i=0;i<words.size() - 1;i++){
            if(!compare(words[i],words[i+1],s)){
                return false;
            }

        }

        return true;
    }


    bool compare(string w1,string w2,unordered_map <char,int> s){

        if(w1.length() == 0) return true;
        if(w2.length() == 0) return false;

        for(int i = 0; i < w1.length();i++){
            if(s[w1[i]] > s[w2[i]]) return false;
            if(s[w1[i]] < s[w2[i]]) return true;
        }
        if(w1.length() <= w2.length()) return true;
        else return false;
    }
};

// Make an unordered map of the order

// compare each word to that order.
