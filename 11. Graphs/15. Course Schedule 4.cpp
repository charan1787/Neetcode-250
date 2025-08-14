class Solution {
private :

    bool dfs(vector<vector<int>> &adj,int u,int v,vector<int> &visited){
        if(u == v) return true;
        visited[u]=1;
        for(int at : adj[u]){
            if(at == v){
                return true;
            }
            else{
                if(visited[at] == 1) continue;
                else if(dfs(adj,at,v,visited)) return true; // very important step
                //else return false;
            }
        }
        return false;
    }
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        
        // form adj matrix
        vector<vector<int>> adj(numCourses);
        for(int i = 0 ;i < prerequisites.size(); i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        // run dfs
        
        vector<bool> res;
        for(int i = 0;i < queries.size();i++){
            vector<int> visited(numCourses,0);
            int u = queries[i][0];
            int v = queries[i][1];
                if(dfs(adj,u,v,visited)){
                    res.push_back(true);
                }
                else{
                    res.push_back(false);
                }
            }
        


        return res;



    }
};

// Form adj matrix
// run dfs
