class Solution {
private : 
    int find_parent(int i,vector<int> &parent){
        if(parent[i-1] != i){
            parent[i-1] = find_parent(parent[i-1],parent);
        }
        return parent[i-1];
    }
    void do_union(int u,int v,vector<int> &sizes,vector<int> &parent){


        if(sizes[u-1] >= sizes[v-1]){
            parent[v-1] = parent[u-1];
            sizes[v-1] += sizes[u-1];
        }
        else if(sizes[v-1] > sizes[u-1]){
            parent[u-1] = parent[v-1];
            sizes[u-1]+= sizes[v-1];
        }
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        // it was mentioned that 1 extra edge is added.
        // Actually in a tree with out cycle we have n - 1 edges for n vertices. 
        // so here we will have n edges so n vertices only.

        vector<int> parent(edges.size(),0); 
        vector<int> sizes(edges.size(),1);

        for(int i = 0;i < edges.size();i++){
            parent[i] = i+1;
        }


        for(auto at : edges){
            int u = at[0];
            int v = at[1];

            int root_u = find_parent(u,parent);
            int root_v = find_parent(v,parent);

            if(root_u == root_v){ // find
                return {u,v};
            }
            else {
                do_union(root_u,root_v,sizes,parent); // union
            }
        }

        return {};
    }
};

// Implement DSU
