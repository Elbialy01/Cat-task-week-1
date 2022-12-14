class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();int m=0;
        sort(nums.begin(),nums.end());
        int y=nums[0];
        m++;
        for(int i=1;i<n;i++){
            if(nums[i]==y)
            m++;
            else {
                y=nums[i];
                m=1;
            }
            if(m>n/2)
            break;
        }
   
       return y; 
    }
};
