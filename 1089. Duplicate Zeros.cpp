class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v;
        int size=0;
        int n=arr.size();
        for(auto it:arr){
            if(size>=n)
            break;
            if(it!=0){
                v.push_back(it);
                size++;
            }
        
            else{
                  if(size>=n)
            break;
                v.push_back(0);
                size++;
                if(size<n){
                v.push_back(0);

                size++;
                }
                else break;
            }

        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
        
    }
};
