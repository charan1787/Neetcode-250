
class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true;
        for(int i=0;i<s.size();i++){
                if(s[i]>='A' && s[i]<='Z') {
                    s[i]=s[i]+32;
                }
        }
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while((i<j)&&!((s[i]>='a' && s[i]<='z')|| (s[i] >= '0' && s[i] <= '9'))) {
                i++;
                //if(i>s.size()-1) return true;
            }
            while((i<j)&& !((s[j]>='a' && s[j]<='z')|| (s[j] >= '0' && s[j] <= '9'))) {
                j--;
            }

            if(s[i]!=s[j]) return false;
            else{
            i++;
            j--;}
        }

        return true;
        
    }
};

// first convert capitals to small
//loop check with 2 pointers at start and end. 
// Before checkig just ignore if not alpha numeric

//https://leetcode.com/problems/valid-palindrome/
