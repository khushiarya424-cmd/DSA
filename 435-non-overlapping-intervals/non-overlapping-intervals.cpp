class Solution {
public:


    static bool comp(vector<int>&a, vector<int>&b){

            //sort() gives comparator function two inputs

             //basically like it assume a[1,2] b[2,3]

             if(a[1]<b[1]){
                return true;

                // jiska ending time chota hai we're keeping that interval ahead
             }
             else{
                return false;
             }
       }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

      
        sort(intervals.begin(), intervals.end(), comp);

        int n=intervals.size();

        int count=0;

        vector<int>current=intervals[0];

        for(int i=1; i<n; i++){

            if(current[1]>intervals[i][0]){
                count++;
            }

            else{
            current=intervals[i];

            }
        }

        return count;
    }
};