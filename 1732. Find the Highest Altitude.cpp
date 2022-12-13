class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int x=0;
        set<int>s;
        s.insert(0);
        for(auto it:gain){
            x+=it;
            s.insert(x);
        }
        auto it =s.end();
        it--;
        return *it;
        
    }
};
