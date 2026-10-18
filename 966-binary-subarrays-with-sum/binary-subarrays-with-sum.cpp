class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
     
        int count_of_ops=0;

        unordered_map<int,int>mpp;
        mpp[0]=1;

        int sum=0;

        for(int i=0; i<nums.size(); i++){
              
              //prefix sum with freq in map
              sum+=nums[i];

              
              int need=sum-goal;

              if(mpp.find(need)!=mpp.end()){
                count_of_ops=count_of_ops+mpp[need];
              }
              mpp[sum]++;
        }

        return count_of_ops;

    }
};