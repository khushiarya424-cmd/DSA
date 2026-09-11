class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        return atmostK_odd(nums, k) - atmostK_odd(nums, k-1);
        
    }

    int atmostK_odd(vector<int>& nums, int k){
        int l=0;

        int r=0;

        int odd_digits=0;

        int count=0;

        while(r<nums.size()){

            if(nums[r]%2!=0){

                // nums[r] odd number hai agar
                odd_digits++;
            }
            if(odd_digits>k){
                while(odd_digits>k){
                    if(nums[l]%2!=0){
                        odd_digits--;
                    }
                    l++;
                }
            }

            if(odd_digits<=k){
                count=count+(r-l+1);
            }

            r++;


        }

        return count;
    }
};