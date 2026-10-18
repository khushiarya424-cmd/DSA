class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int maxi=0;
        int count_zero=0;

        

        for(int right=0; right<nums.size(); right++){

            if(nums[right]==0){
                count_zero++;

            }

            while(count_zero>k && left<=right){
                if(nums[left]==0){
                    count_zero--;
                }
                left++;
            }
            if(count_zero<=k){
              maxi=max(maxi,right-left+1);
            }
        }
        return maxi;
    }
};