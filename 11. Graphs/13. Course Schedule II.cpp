class Solution {
    private :
    int cycle = 0;
    void dfs(vector<vector<int>> &adj,stack<int> &st,vector<int> &visited,int i){
        // 0 for not visited
        // 1 for visited but in stack
        // 2 for fully visited
        // if we find visit[1] again in the recursion it means we have a cycle.
        if(cycle) return;
        visited[i]=1;
        for(int it : adj[i]){
            if(visited[it] == 0){
                dfs(adj,st,visited,it); 
            }
            else if(visited[it] == 1){
                cycle = 1;
                return;
            }
        }
        visited[i]=2;
        st.push(i);
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // building adj matrix first
        // the nodes are reversed in the question so we store in the opp direction
        vector<vector<int>> adj(numCourses);

        for(int i = 0; i < prerequisites.size(); i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]); // adj matrix is created
        }

        // initialise visited vector
        vector<int> visited(numCourses,0);

        // create a stack for storing elements
        stack<int> st;

        // dfs starts here, we visit all the nodes in the adj
        for(int i = 0;i < numCourses;i++){
            if(visited[i] == 0){
                dfs(adj,st,visited,i);
            }
        }

        if(cycle) return {};
        
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
        
       
    }
};

