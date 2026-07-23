class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        int t = 0 , d = n-1 ;
        while(t<d)
        {
            swap(matrix[t],matrix[d]) ;
            t++;
            d--;
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i ; j < n ; j++)
            {
                swap(matrix[i][j] , matrix[j][i]) ;
            }
        }
    }
};

