class Solution {
public:
    int findLucky(vector<int>& arr) {
        set<int>s;
        int f;
        for(int i=0;i<arr.size();i++){
            f=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j])
                f++;

            }
            if(f==arr[i])
            s.insert(arr[i]);
        }
        if(s.empty())
        return -1;
        auto it =s.end();
        it--;
        return *it;
        
    }
};
