class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;
        int n = operations.size();
        int sum2 = 0;

        for(int i = 0;i < n;i++){
            if(operations[i] == "C"){
                sum2 = sum2 - st.top();
                st.pop();
            }
            else if(operations[i] == "D"){
                sum2 = sum2 + (2 * st.top());
                st.push(2 * st.top());
            }
            else if(operations[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);

                sum2 = sum2 + (a + b);
            }
            else{
                st.push(stoi(operations[i]));
                sum2 = sum2 + stoi(operations[i]);
            }
        }

        return sum2;
    }
};

// TC O(n) -  1 for loop
// SC O(n) 

