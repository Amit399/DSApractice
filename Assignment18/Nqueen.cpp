class Solution {
public:
    bool isGoodVector(vector<string> &board, int i, int j, int n)
    {
        while(i>=0)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        while(j>=0 && i>=0)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        while(j<n && i>=0)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        return true;
    }
    void recursion(vector<vector<string>> &chess, vector<string>board, int row, int n)
    {
        if(row==n)
        {
            chess.push_back(board);
            return;
        }
        for(int col=0; col<n; col++)
        {
            if(isGoodVector(board, row, col, n))
            {
                board[row][col]='Q';
                recursion(chess, board, row+1, n);
                board[row][col]='.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>chess;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0; i<n; i++)
        {
            board[i]=s;
        }
        recursion(chess, board, 0, n);
        return chess;
        
    }
};
