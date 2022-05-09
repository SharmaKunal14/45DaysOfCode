class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int elementsTraversed = 0;
        int totalElements = matrix.size()*matrix[0].size();
        int srow = 0, scol = 0, erow = matrix.size() - 1, ecol = matrix[0].size() - 1;
        while(elementsTraversed < totalElements){
            for(int i = scol; i <= ecol && elementsTraversed < totalElements; i++){
                ans.push_back(matrix[srow][i]);
                elementsTraversed++;
            }
            srow++;
            for(int i = srow; i <= erow && elementsTraversed < totalElements; i++){
                ans.push_back(matrix[i][ecol]);
                elementsTraversed++;
            }
            ecol--;
            for(int i = ecol; i >= scol && elementsTraversed < totalElements; i--){
                ans.push_back(matrix[erow][i]);
                elementsTraversed++;
            }
            erow--;
            for(int i = erow; i >= srow && elementsTraversed < totalElements; i--){
                ans.push_back(matrix[i][scol]);
                elementsTraversed++;
            }
            scol++;
            
        }
        return ans;
    }
};