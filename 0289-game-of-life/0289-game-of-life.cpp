class Solution {
    vector<int> dx,dy ;
    int n , m ;
    pair<int,int> calculate(int i , int j , vector<vector<int>>& board)
    {
        int live_count = 0 , dead_count = 0 ;
        for(int k = 0 ; k < 8 ; k++)
        {
            int x = i + dx[k] , y = j+dy[k] ;
            if(x<m && y<n && x>=0 && y>=0)
            {
                live_count += board[x][y] ;
                dead_count += !board[x][y] ;
            } 
        }
        return {live_count,dead_count} ;
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        dx = {1,-1,0,0,1,1,-1,-1} ;
        dy = {0,0,1,-1,1,-1,1,-1} ;
        m = board.size() , n = board[0].size() ;
        vector<vector<int>> new_board(m,vector<int>(n)) ;
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                pair<int,int> p = calculate(i,j,board);
                if(board[i][j] == 1)
                {
                    new_board[i][j] = 1 ;
                    if(p.first < 2 || p.first > 3)
                        new_board[i][j] = 0 ;
                }
                else
                {
                    new_board[i][j] = 0 ;
                    if(p.first == 3)
                        new_board[i][j] = 1 ;
                }
            }
        } 
        board = new_board ;
    }
};

