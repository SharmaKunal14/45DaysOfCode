class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

         int n = points.size(), res = 0;
        for (int i = 0; i < n; i++) {
            int vertical = 0, ma = 0;
            unordered_map<double,int> m;
            for (int j = 0; j < n; j++) {
                if (points[i][0] == points[j][0]) {
                    vertical++;
                }
                else {
                    double slope = (double)(points[i][1] - points[j][1]) / (double)(points[i][0] - points[j][0]);
                    ma = max(ma, ++m[slope]);
                }
            }
            res = max({res, vertical, 1 + ma});
        }
        return res;
    }
};