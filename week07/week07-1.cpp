//week07-1.cpp Leetcode 1275
class Solution {
public:
    void myPrintBoard(int board[3][3]) {
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};
        for(auto move : moves) {
            int i = move[0], j = move[1];
            board[i][j];
            myPrintBoard(board);
        }
        return "A";
    }
};