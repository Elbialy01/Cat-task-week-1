class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        multiset<int>ms;
        for(auto it:nums)
        ms.insert(it);

        for(int i=1;i<=nums.size();i++){
            if(!ms.count(i))
            v.push_back(i);
 
        }
        return v;
    }
};
