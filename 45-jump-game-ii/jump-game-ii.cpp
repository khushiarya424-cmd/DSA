class Solution {
public:
    int jump(vector<int>& nums) {

        if(nums.size()==1){
            return 0;
        }
        int jumps=1;
             
        int currMax=nums[0];
        int newMax=currMax;
        int n=nums.size();

        for(int i=1; i<nums.size(); i++){
             newMax=max(newMax, nums[i]+i);
            if(i<n-1 && i==currMax){
                jumps++;

                currMax=newMax;
            }
        }
        return jumps;        
    }
};