class Solution {
public:
    vector<int> getRow(int n) {
     long long  prev =1;
        vector<int>v;
        v.push_back(1);
        for(int i=1;i<=n;i++){
            long long  curr=(prev*(n-i+1))/i;
            v.push_back(curr);
            prev=curr;

        }
        return v;
        
    }
};
