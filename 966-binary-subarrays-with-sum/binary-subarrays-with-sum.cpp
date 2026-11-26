class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l=0;
        int r=0;

        int sum=0;
        int count=0;
       
        unordered_map<int, int>mpp;
        mpp[0]=1;

        for(int i=0; i<nums.size(); i++){

            sum+=nums[i];

            int need=sum-goal;
            if(mpp.find(need)!=mpp.end()){
                count=count+mpp[need];
            }
            mpp[sum]++;
        }
        return count;
    }
};