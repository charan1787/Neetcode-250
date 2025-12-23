class MinStack {
private:
    stack<int> st;
    stack<int> minst;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty() || val <= minst.top()){ 
          // it has to be <= becuase if [2,2] case and you do pop operation stackk has 2 numbers of 2 but min stack will have only 1, 
          // so when you do pop it removes from st and min stack but still one 2 will be there in the stack and minimum.
            minst.push(val);
        }
    }
    
    void pop() {
        if(st.top() == minst.top()){
            minst.pop();
        }
        st.pop();
    }
// understand that pop operation is to remove that element, so when we remove it from stack on the top, that element is either on top of min stack or not. 
// st = [2,3,7]
// min stack = [2]

// st = [5,3,6]
// min stack = [5,3]
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

// we have to use 2 stacks one to stack and minstack to store minimum at each level.
// so at any point of stack if you want to see its minimum ww simple see top of min stack.
// TC - O(1)
// SC - O(n)
