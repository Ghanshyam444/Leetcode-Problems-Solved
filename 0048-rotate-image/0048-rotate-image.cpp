class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> mat = matrix;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][n-1-i] = mat[i][j];
            }
        }
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         mat[i][j] = matrix[i][j];
        //     }
        // }
        
    }
};