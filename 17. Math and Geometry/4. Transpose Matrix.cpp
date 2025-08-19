class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size(); // row size
        int n = matrix[0].size(); // col size
        vector<vector<int>> newmat(n, vector<int>(m)); // know how this size is created

        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                newmat[j][i] = matrix[i][j]; // loop over main matrix thats why m loop then n loop.
            }
        }
        return newmat;
    }
};
