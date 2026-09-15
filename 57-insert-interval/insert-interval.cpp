class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
         vector<vector<int>>res;

         int i=0;
         int n=intervals.size();

         while(i<n && intervals[i][1]<newInterval[0]){

            // occuring completely before my new interval so simply add them

            res.push_back(intervals[i]);
            i++;

         }
         
         //now comes the overlapping section

         while(i<n && intervals[i][0]<=newInterval[1] ){

            newInterval[0]=min(intervals[i][0], newInterval[0]);

            newInterval[1]=max(intervals[i][1], newInterval[1]);

            i++;
         }
          
          //merging the new onw
         res.push_back(newInterval);

         //now inserting the intervals that occur after it

         while(i<n){

            res.push_back(intervals[i]);
            i++;
         }

         return res;


    }
};