class Solution {
public:
    bool canJump(vector<int>& nums) {
        int destMax=0;
        int n=nums.size();

        for(int i=0; i<nums.size(); i++){
              
              if(i>destMax){
                return false;
              }
            destMax=max(destMax, i+nums[i]);
        }
        if(destMax>=n-1){
            return true;
        }
        else{
            return false;
        }

    }
};