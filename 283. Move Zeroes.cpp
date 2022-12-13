class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int countzeros=0;
        int i=0;
        for(auto it:nums){
            if(it!=0){
                nums[i]=it;
                i++;
            }
            else countzeros++;
        }
        while(countzeros--){
            nums[i]=0;
            i++;
        }
        
    }
};
