class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
         vector<vector<int>> B(m, vector<int>(n));

        for(int j=0;j<matrix.size();j++){
            for(int i=0;i<matrix[j].size();i++){
                B[i][j]=matrix[j][i];
                

            }
            
        }
        return B;
    }
};
