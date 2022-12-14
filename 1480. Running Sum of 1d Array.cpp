class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
     int  sum=0;
        for(auto it:nums){
            sum+=it;
            v.push_back(sum);


        }
        return v;
        
    }
};
