class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min=arr[1]-arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<min)
            min=arr[i]-arr[i-1];
        }
        vector<vector<int>>v;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==min)
            v.push_back({arr[i-1],arr[i]});
        }


        
  
       
        return v;
    }
};
