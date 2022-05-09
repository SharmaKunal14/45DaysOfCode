class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int x1 = 0, y1 = 0, x2 = 0, y2 = matrix[0].size()  - 1, x3 = matrix.size() - 1, y3 = 0, x4 = matrix.size() - 1, y4 = matrix[0].size() - 1;
        
        //swaps ->
        // (x2,y2) -> (x1,y1)  => (x2,y2--)
        // (x1,y1) -> (x3,y3)  => (x1++,y1)
        // (x3,y3) -> (x4,y4)  => (x3,y3++) , (x4--,y4)
        
        
        // for(int i = 0; i < matrix.size() - 1 ; i++){
        //     swap(matrix[x2][y2], matrix[x1][y1]);
        //     y2--;
        //     swap(matrix[x1][y1], matrix[x3][y3]);
        //     x1++;
        //     swap(matrix[x3][y3], matrix[x4][y4]);
        //     y3++;
        //     x4--;
        // }
        
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cout << matrix[i][j] << '\t';
            cout << '\n';
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m/2;j++)
            {
                swap(matrix[i][j],matrix[i][m-j-1]); 
            }
        }
        
        
    }
};