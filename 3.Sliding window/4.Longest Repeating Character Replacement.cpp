class Solution {
public:
    int characterReplacement(string s, int k) {
    
    vector<int> counter(26,0);
    int i = 0;
    int j = 0;
    int max_length = INT_MIN;
    int res = 0;

    while(j < s.length()){
        counter[s[j] - 'A']++;

        max_length = max(max_length, counter[s[j] - 'A']);

        while((j - i + 1) - max_length > k){
            counter[s[i]-'A']--;
            i++;
        }
        res = max(res,j-i+1);

        j++;
    }
      return res;  

    }
};

// https://www.youtube.com/watch?v=tkNWKvxI3mU
