class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto it =nums.end();
        it--;
        return (*it-1)*(*(it-1)-1);

    }
};
