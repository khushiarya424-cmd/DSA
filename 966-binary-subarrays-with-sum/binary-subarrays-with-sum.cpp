class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return subarray_sum_atMost(nums, goal)- subarray_sum_atMost(nums, goal-1);
    }

    
    int subarray_sum_atMost(vector<int>& nums, int goal) {

        int l=0;
        int r=0;

        int sum=0;

        int count=0;  //count of subarrays

        if(goal<0){
            return 0;
        }

        // [1, 0, 1, 0, 1]


        while(r<nums.size()){

            sum+=nums[r];

            while(sum>goal){
                //shrink

                sum=sum-nums[l];
                l=l+1;
            }

            count=count+(r-l+1);
            // count gives us the number of possible subarrays in that range of l and r window

            r++;


        }

        return count;
    }
    

  
};