class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n == 0) return false;

        stack<char> st;

        for(int i = 0; i<n;i++){
            char check = s[i];
            if(check == '(' || check == '{' || check == '['){
                st.push(check);
            }
            else if(st.empty()) return false;

            // brutally important case to check the empty state after the push.
            // or else it will cause runtime error as st.top() is not defined.
            // eg : string s = ']'
            // for string s = '[' it pushes to stack and stack size gets checked at last, but for ']' we have to check in the middle. 

            else if(check == ')' && st.top() == '('){
                st.pop();
            }
            else if(check == ']' && st.top() == '['){
                st.pop();
            }
            else if(check == '}' && st.top() == '{'){
                st.pop();
            }
            else {
                return false;
            }
        }

        
        return st.empty();
        
    }
};

// TC - O(n)
// SC - O(1)
