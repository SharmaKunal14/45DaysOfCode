class Solution {
public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1}; 
    vector<vector<int>> v;
    int sColor;
    void dfs(int sr, int sc, int color){
        v[sr][sc] = color;
        for(int i = 0; i < 4; i++){
            int xx = sr + dx[i];
            int yy = sc + dy[i];
             if(xx >= 0 && xx < v.size() && yy >= 0 && yy < v[0].size() && v[xx][yy] != color && v[xx][yy] == sColor){
            dfs(xx,yy,color);      
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        this->v = image;
        this->sColor = image[sr][sc];
        dfs(sr,sc,newColor);
        
        return v;
    }
};