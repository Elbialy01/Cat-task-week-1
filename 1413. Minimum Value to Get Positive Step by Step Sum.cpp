class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1;;i++){
            int sum=i;
            int y=1;
            for(auto it:nums){
                sum+=it;
                if(sum<1){
                    y=0;
                break;
                }

            }
            if(y)
           return i;
        }
        
    }
};
