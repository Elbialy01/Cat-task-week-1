class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        auto it =endTime.begin();
        auto y=startTime.begin();
        int counter=0;
        for(it,y;it!=endTime.end();it++,y++){
            if(*it>=queryTime&&*y<=queryTime){
                counter++;
            }
        }
return counter;
        
    }
};
