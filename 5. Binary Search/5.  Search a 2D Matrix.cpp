class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int i = 0;
        int j = m*n - 1;

        if(target < matrix[0][0]) return false;

        while(i <= j){
 
            int mid = i + (j-i)/2;
            if(matrix[mid/n][mid%n] == target){
                return true;
            }
            else if(matrix[mid/n][mid%n] < target){
                i = mid + 1;
            }
            else j = mid -1;
            
        }
        return false;
    }
};

// Treat the whole matrix like a single array and solve

// i = 0;
// j = m*n - 1;

// mid = i+j/2

// then check matrix[mid/n][mid%n] == target
