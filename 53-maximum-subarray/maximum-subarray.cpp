class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //[]
        //-2 1 -3 4 -1 2 1 -5 4
        int sum=nums[0];
        int maxi=nums[0];
        int currsum=nums[0];
        for(int i=1; i<nums.size(); i++){
              
              currsum=currsum+nums[i];
              if(currsum>=nums[i]){
                maxi=max(maxi, currsum);
              }
              else if(nums[i]>currsum){
                
                currsum=nums[i];
                maxi=max(maxi, currsum);
              }

        }
        return maxi;
    }
};