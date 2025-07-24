class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j = 0,i = 0;
        int max_length = 0;
        //int cur_length = 0;
        unordered_set<char> store;

        while(j < s.size()){
            while(store.find(s[j])!=store.end()){
                store.erase(s[i]);
                i++;
            }
            store.insert(s[j]);
            j++;
            //cur_length = j - i;
            max_length = max(max_length,j-i);
        }
        return max_length;
    }
};

// take a set

// first check if element in set if yes remove from last
// then insert the current element
// update the size
