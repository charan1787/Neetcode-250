class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if( i == 0 || i == rows -1 || j == 0 || j == cols-1){
                    if(board[i][j]=='O'){
                        dfs(board,i,j,rows,cols);
                    }
                }
            }
        }

        for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(board[i][j] == 'O'){
                board[i][j] = 'X';
            }
        }
    }

        for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(board[i][j] == 'V'){
                board[i][j] = 'O';
            }
        }
    }
    
    }
    void dfs(vector<vector<char>>& board,int i,int j,int rows,int cols){
        int dr[4]={1,-1,0,0};
        int cr[4]={0,0,1,-1};
        board[i][j] = 'V';
        for(int k = 0;k<4;k++){
            int rnew = dr[k] + i;
            int cnew = cr[k] + j;

            if(rnew >=0 && rnew < rows && cnew >=0 && cnew < cols && board[rnew][cnew] == 'O'){

                dfs(board,rnew,cnew,rows,cols);

            }
        }
    }


    
};


// Identify the boundary Os then by dfs change them to V 

// change the remaining Os to X

// change back V to Os done.
