class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
 
        int ar[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ar[i][j]=0;
            }
        }
        for(int t=0;t<indices.size();t++){
            int h,g;
            for(int j=0;j<1;j++){
                h=indices[t][j];
                g=indices[t][j+1];
            }
         for(int j=0;j<n;j++){
             ar[h][j]++;    
         }  
         for(int j=0;j<m;j++){
             ar[j][g]++;
         }
        }
        int count=0;
         for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
         if(ar[i][j]%2==1){
         count++;
         }
         }
         }
return count;
        
    }
};
