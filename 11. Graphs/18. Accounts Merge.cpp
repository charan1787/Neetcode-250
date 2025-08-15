class Solution {
private :
    int find_parent(int i,unordered_map<int,int> &parent){
        if(parent[i] == i){
            return i;
        }
        else {
            return find_parent(parent[i],parent);
        }
    }

    void do_union(int i, int j,unordered_map<int,int> &sizes,unordered_map<int,int> &parent){
        int u = find_parent(i,parent);
        int v = find_parent(j,parent);
        if(u == v) return;
        if(sizes[u] >= sizes[v]){
            parent[v] = parent[u];
            sizes[u] += sizes[v];
        }
        else{
            parent[u] = parent[v];
            sizes[v] += sizes[u];
        }
    }
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,int> emailtoname;
        unordered_map<int,int> parent;
        unordered_map<int,int> sizes;

        for (int i = 0; i < accounts.size(); i++) {
            parent[i] = i;
            sizes[i] = 1;
        }


        for(int i = 0; i < accounts.size();i++){
            for(int j = 1; j < accounts[i].size();j++){
                string email = accounts[i][j];
                if(emailtoname.find(email) != emailtoname.end()){
                    do_union(emailtoname[email],i,sizes,parent);
                }
                else {
                    emailtoname[email] = i;
                }
            }
        }

        
        vector<vector<string>> result;
        vector<string> arr[accounts.size()];


        for(auto [email,idx] : emailtoname){
            int primary_node = find_parent(idx,parent);
            arr[primary_node].push_back(email);
        }

        for(int i = 0 ;i < accounts.size();i++){
            sort(arr[i].begin(), arr[i].end());
        }

        for(int i = 0 ;i < accounts.size();i++){
            
            if(!arr[i].empty()){
                vector<string> temp;

                string name = accounts[i][0];
                temp.push_back(name);
                for(auto it:arr[i]) {
                    temp.push_back(it);
                }
  
                result.push_back(temp);
            }
        
        }

        return result;


    }
};

// Solve using DSU

// First form a map for each email to a node 
// (each name is a node)

// after the map is formed put each of them to a vector according to their parent nodes. 

// sort them 

// take them to onother vector

// https://www.youtube.com/watch?v=FMwpt_aQOGw&t=1113s

// hard to understand (but same concept as DSU)
