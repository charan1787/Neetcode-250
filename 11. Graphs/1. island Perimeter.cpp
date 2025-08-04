class Solution {
public:
int rows,cols;
    int islandPerimeter(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        int per = 0;
        for(int i = 0;i < rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j]==1) {
                    dfs(grid,i,j,per);
                    return per;
                    //break;
                }
            }
        }

        return per;
        
    }

    void dfs(vector<vector<int>>& grid,int i,int j,int &per){

        if(i<0 || j<0 || i >= rows || j>=cols){
            per+=1;
            return;
        }
        if(grid[i][j] == 0) {per+=1; return;}
        if(grid[i][j] ==2) return;

        grid[i][j] = 2;
        

        dfs(grid,i-1,j,per);
        dfs(grid,i+1,j,per);
        dfs(grid,i,j-1,per);
        dfs(grid,i,j+1,per);

        //return per;
    }
};

// Find the island i.e 1 in the block and then do 4 side approach and add perimeter.
