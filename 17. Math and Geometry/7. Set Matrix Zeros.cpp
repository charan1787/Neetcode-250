class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int firstrow = 0;
        int firstcolumn = 0;
        for(int i = 0; i <n;i++){
            if(matrix[0][i] == 0) firstrow = 1;
        }
        for(int i = 0;i < m;i++){
            if(matrix[i][0] == 0) firstcolumn = 1;
        }

        for(int i = 1; i < m; i++){
            for(int j = 1;j < n;j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1; i < m; i++){
            for(int j = 1;j < n;j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }


        if(firstrow){
            for(int i = 0;i < n;i++){
                matrix[0][i] = 0;
            }
        }

        if(firstcolumn){
            for(int i = 0; i < m;i++){
                matrix[i][0] = 0;
            }
        }

    }
};


// Find if first row and first column contains any zeros

// take 2 bool variables and store.

// zero the entie row or col at the end.

// so in the middle - do 2 iteration

// 1st iternation -  if you find any zero. put zero in that first row or column. loop from 1st index not zero.

// 2nd iteration - if m[i][0] or m[0][j] are zeros then m[i][j] is also zero.
