class Solution {
public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1}; 
    vector<vector<char>> v;
    void dfs(int x, int y,int node, int color){
        v[x][y] = '2';
        for(int i = 0; i < 4; i++){
            int xx = x + dx[i];
                int yy = y + dy[i];
            if(xx >= 0 && xx < v.size() && yy >= 0 && yy < v[0].size() && v[xx][yy] == '1'){
                int n = v[xx][yy] - '0';
                dfs(xx,yy,n,color);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        this->v = grid;
        int color = 1;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size();j++){
                int node = grid[i][j] - '0';
                if(v[i][j] == '1')
                    dfs(i,j, node,color++);
            }
        }
        
        return color - 1;
        
        
    }
};