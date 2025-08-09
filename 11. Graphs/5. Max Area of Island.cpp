class Solution {
public:
int max_area = 0;
//int area = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int area = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                    area = 0;
                    dfs(grid,i,j,area);
            }
        }

        return max_area;
    }

    void dfs(vector<vector<int>>& grid,int i,int j,int &area){
        
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
            return;
        }
        if(grid[i][j] == 2 || grid[i][j] == 0) return;
        
                grid[i][j] = 2;
                area++;
                max_area = max(max_area,area);
        
        dfs(grid,i+1,j,area);
        dfs(grid,i,j+1,area);
        dfs(grid,i-1,j,area);
        dfs(grid,i,j-1,area);
    }
};

// Same as No of Islands logic just maintain max area and ares ariables.
// https://leetcode.com/problems/number-of-islands/
// https://leetcode.com/problems/max-area-of-island/
