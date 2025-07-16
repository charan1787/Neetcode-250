class Solution {
public:
int m =0,n=0;
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();

    unordered_map<char, int> boardFreq, wordFreq;
    for (auto& row : board)
        for (char c : row)
            boardFreq[c]++;
    for (char c : word) {
        wordFreq[c]++;
        if (wordFreq[c] > boardFreq[c]) return false;  // Early pruning
    }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(helper(board,word,0,i,j)) return true;
            }
        }

        return false;

    }

    bool helper(vector<vector<char>>& board, string &word,int index,int i,int j){
        if(index == word.size()){
            return true;
        }

        if(i >= m || i < 0|| j < 0|| j>=n || board[i][j] == '#' || word[index] != board[i][j]  ) return false;

        char temp = board[i][j];
        board[i][j] = '#';

        if(
            helper(board,word,index + 1,i+1,j) ||
            helper(board,word,index + 1,i,j+1) ||
            helper(board,word,index + 1,i-1,j) ||
            helper(board,word,index + 1,i,j-1) 
        ) {return true;}

        board[i][j] = temp;
        return false;

        
    }
};

// https://leetcode.com/problems/word-search/

// use double for loop to check all the places. 

// give it to back track function 

// if it founds a match on that place if check all the 4 sides - > if true return true

// optimisation : 

// use letter frequency for both board and word if anywhere mismatches return false
