class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        //result
        vector<vector<int>>ans;

        int newStart=newInterval[0];    // [4,8] -->4
        int newEnd=newInterval[1];    //[4,8] -->8

        int i=0;
       int n=intervals.size();
        while(i<n && newStart> intervals[i][1]){
            ans.push_back(intervals[i]);
            i++;    //before overlapping part
        }
        while(i<n && intervals[i][0]<=newEnd){
                 newStart=min(intervals[i][0], newStart);   //during overlapping phase
                 newEnd=max(intervals[i][1], newEnd);
                 i++;
        }
        ans.push_back({newStart, newEnd});

        //after overlapping phase

        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;


    }
};