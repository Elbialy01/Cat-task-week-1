class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=1;i<=n;i+=2){
            int length=0;
            while((length+i)<=n){
                for(int j=length;j<length+i;j++){
                    sum+=arr[j];
                }
                length++;
            }
        }

        return sum;
    }
};
