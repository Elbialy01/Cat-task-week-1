class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum;
        set<int>s;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            s.insert(sum);
        }
        auto it=s.end();
        it--;
        return *it;
        
    }
};
