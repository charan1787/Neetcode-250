class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        //int visited[rows][cols] = {0};
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        queue<pair<pair<int,int>,int>> q;

        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }

        int max_time = 0;
        int rd[4] = {0,1,-1,0};
        int cd[4] = {1,0,0,-1};
        while(!q.empty()){
            int rnew = q.front().first.first;
            int cnew = q.front().first.second;
            int time = q.front().second;
            max_time = max(max_time,time);
            q.pop();
            for(int i = 0;i<4;i++){
                int rr = rnew + rd[i];
                int cc = cnew + cd[i];
                if(rr >= 0 && rr < rows && cc >= 0 && cc< cols && visited[rr][cc] == 0 && grid[rr][cc] == 1){
                    grid [rr][cc] = 2;
                    visited[rr][cc] = 1;
                    q.push({{rr,cc},time + 1});
                }
            }
        }


        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }

        return max_time;


    }
};

// Store all rotten in queue

// start bfs from there.

// keep time counter in the queue itself.
