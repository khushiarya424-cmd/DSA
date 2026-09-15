class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        //in this question intervals may or may not be sorted whereas in previous one they were sorted so first sort

        sort(intervals.begin(), intervals.end());

        int i=0;

        int n=intervals.size();

        vector<vector<int>>res;

        vector<int>current=intervals[0];

        //basically now we have [[1,3]] from the input as current=[1,3] like a 1-d vector

        for(int i=1;i<n;i++){

            if(current[1]>=intervals[i][0]){

                current[0]=min(current[0], intervals[i][0]);

                current[1]=max(current[1], intervals[i][1]);

            }

            else{

                //if not overlapping then we simply push it into the new vector

                res.push_back(current);

                current=intervals[i];  //updating current
            }
        }

        res.push_back(current);

        return res;




        
    }
};