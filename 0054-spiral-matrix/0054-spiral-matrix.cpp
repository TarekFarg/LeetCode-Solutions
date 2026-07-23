class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size() ;
        vector<vector<bool>> vist(m,vector<bool>(n));
        vector<int> ans ;
        int curDir = 0 , i = 0 , j = 0 , count = 0 ;
        while(count < (n*m))
        {
            if(!vist[i][j])
            {
                vist[i][j] = true ;
                ans.push_back(matrix[i][j]) ;
                count++;
            }
            
            if(curDir%4 == 0 && j+1 < n && !vist[i][j+1] ) // R
                j++; 
            else if(curDir%4 == 1 && i+1 < m && !vist[i+1][j]) // D
                i++;
            else if(curDir%4 == 2 && j-1 >=0 && !vist[i][j-1]) // L
                j-- ;
            else if(curDir%4 == 3 && i-1 >=0 && !vist[i-1][j] ) // U
                i--;
            else
                curDir++;
        }
        return ans;
    }
};

// R -> D -> L -> U -> R -------
// %4 -> 0 -> R
// %4 -> 1 -> D
// %4 -> 2 -> L
// %4 -> 3 -> U

