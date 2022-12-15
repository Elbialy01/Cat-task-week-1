class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int cl=0;
        int sumc=0;
        if(mat.size()%2==1)
        sumc-=mat[mat.size()/2][mat.size()/2];
        for(int i=0;i<mat.size();i++,cl++){
            sumc+=mat[i][cl];
        }
        cl=mat.size()-1;
        for(int i=0;i<mat.size();i++,cl--)
        sumc+=mat[i][cl];
        return sumc;
    
        
    }
};
