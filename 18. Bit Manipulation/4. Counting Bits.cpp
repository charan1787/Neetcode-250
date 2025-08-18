class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);

        for(int i = 1;i<=n;i++){
            if(i/2 > 0){
               if(i%2 == 0){
                ans[i] = ans[i/2];
               }
               else ans[i] = ans[i/2] + 1;
            }
            else {
                ans[i] = 1;
            }
        }

        return ans;
    }
};

// count bits - even numbers has same number of 1's as i/2 odd numbers have i/2 + 1.
