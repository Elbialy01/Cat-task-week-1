class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        auto v=grid;
        int n=k/grid[0].size();
        if(grid.size()==1&&grid[0].size()==1){
            return grid;
        }  
        while(k--){
         v[0][0]=v[grid.size()-1][grid[0].size()-1];
             int r=0,c=1;
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[i].size();j++){
                 if(c==grid[i].size()){c=0;r++;}
                
                if(r<grid.size()){
                v[r][c]=grid[i][j];
                c++;    
            }
        }
        }
        grid=v;
        
        } 
        return v;     
    }
};
