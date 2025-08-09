class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j]=='1') count++;
                    dfs(grid,i,j);
            }
        }

        return count;
    }

   void dfs(vector<vector<char>>& grid,int i,int j){
        
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
            return;
        }
        if(grid[i][j] == 'V' || grid[i][j] == '0') return;;
        if(grid[i][j] == '1') {
                grid[i][j] = 'V';
            }
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
    }
};

// do 2 for loops on grid.

// run dfs on grid i,j = 1;
// mark visited on all 1's around it

// https://leetcode.com/problems/number-of-islands/


