class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1_count(26,0);
        vector<int> s2_count(26,0);

        if (s1.length() > s2.length()) return false;

        for(int i = 0; i < s1.length(); i++){
            s1_count[s1[i] - 'a']++;
            s2_count[s2[i] - 'a']++;
        }

        if (s1_count == s2_count) return true;

        for(int i = s1.length(); i < s2.length(); i++){
            s2_count[s2[i] - 'a'] ++;
            s2_count[s2[i - s1.length()] - 'a'] --;

            if(s1_count == s2_count) return true;
        }

        return false;


    }
};

// Take a sliding window of size s2.lenght()

// check frequency of the window with s1
