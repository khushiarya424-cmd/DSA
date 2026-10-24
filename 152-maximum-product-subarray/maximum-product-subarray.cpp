class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // [ -4, 1, -2, 3]

        int maxProd=nums[0];
        int minProd=nums[0];
        int ans=nums[0];

        for(int i=1; i<nums.size(); i++){

            int oldMax=maxProd;
            int oldMin=minProd;   //keeping track of the old maxProd and minProd

            // now checking for the new maxProd and minProd
            maxProd=max({nums[i],nums[i]*oldMax, nums[i]*oldMin});
            minProd=min({nums[i], nums[i]*oldMax, nums[i]*oldMin});

            ans=max(ans, maxProd);
        }
        return ans;
    }
};