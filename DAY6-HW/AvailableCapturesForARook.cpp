class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int m,n;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<8;j++)
                if(board[i][j]=='R'){
                    m=i,n=j;
                    break;
                }
        }
        int c=0;
        int i=m+1,j=n;
        while(i>=0 && i<8 && j>=0 && j<8 && board[i][j]!='p' && board[i][j]!='B')
            i++;
        if(i>=0 && i<8 && j>=0 && j<8 && board[i][j]=='p')
            c++;
        
        i=m-1,j=n;
        while(i>=0 && i<8 && j>=0 && j<8 && board[i][j]!='p' && board[i][j]!='B')
                i--;
        if(i>=0 && i<8 && j>=0 && j<8 && board[i][j]=='p')
            c++;
        
        i=m,j=n-1;
        while(i>=0 && i<8 && j>=0 && j<8 && board[i][j]!='p' && board[i][j]!='B')
                j--;
        if(i>=0 && i<8 && j>=0 && j<8 && board[i][j]=='p')
            c++;
        
        i=m,j=n+1;
        while(i>=0 && i<8 && j>=0 && j<8 && board[i][j]!='p' && board[i][j]!='B')
                j++;
        if(i>=0 && i<8 && j>=0 && j<8 && board[i][j]=='p')
            c++;
        
        return c;
    }
};
