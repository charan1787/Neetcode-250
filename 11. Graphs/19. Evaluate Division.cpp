class Solution {

private:
    //double ans = 0;
    double dfs(string num, string den,  unordered_map<string,vector<pair<string,double>>> &mp, set<string> &visited){
        if (num == den) return 1.0; // this has to inside, first i kept this in calcequation its wrong, as this condition can be acheived in vetween dfs loop.
        visited.insert(num); // no pop operation as they mentioned there will be an answer for sure or -1.

        for(int i = 0;i < mp[num].size();i++){
            if(visited.find(mp[num][i].first) != visited.end()) continue;
            if(mp[num][i].first == den){
                return mp[num][i].second;
            }
            double temp = dfs(mp[num][i].first,den,mp,visited); // important step
            if(temp != -1) return mp[num][i].second * temp;
        }
        return -1.0;
        
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n = equations.size();
        unordered_map<string,vector<pair<string,double>>> mp;

        for(int i = 0;i < n; i++){
            string num = equations[i][0];
            string den = equations[i][1];
            double val = values[i];
            double valrev = 1/val;

            mp[num].push_back({den,val});
            mp[den].push_back({num,valrev});
        }
        
        
        vector<double> result;
        for(int i = 0; i < queries.size();i++){
            set<string> visited;
            string num = queries[i][0];
            string den = queries[i][1];
            if(mp.find(num) == mp.end() || mp.find(den) == mp.end()) { result.push_back(-1.0); }
            
            else{ result.push_back(dfs(num,den,mp,visited));}
        }

        return result;


    }
};
// Hard to understand & implement
// https://www.youtube.com/watch?v=Uei1fwDoyKk&t=932s
// 
