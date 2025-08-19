class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string result = "";
        while(n>0){
            n--;
            int rem = n % 26;
            result += ('A' + rem - 1);
            n = n / 26;
        }

         reverse(result.begin(), result.end());
         return result;
        
    }
};

// n-- is very important line
// if we do minus one to A if it does not go to Z

// Hence this is useful.
