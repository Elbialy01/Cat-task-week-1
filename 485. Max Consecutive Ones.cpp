class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        set<int>s;
        int count=0;
        for(auto it:nums){
            if(it==1)
            count++;
            else {
                s.insert(count);
                count=0;
            }
        }
        s.insert(count);
        auto it=s.end();
        it--;
        return *it;
    }
};
