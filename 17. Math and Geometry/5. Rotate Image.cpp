class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //int m = matrix.size();
        int n = matrix.size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < i;j++){
                int c = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = c;
            }
        }

        for(int i = 0;i < n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

        //return matrix;
    }
};
