class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;  //unique element counter
        int l=0;

        int r=0;

        while(r<nums.size()){
            if(nums[l]==nums[r]){
                r++;
            }
            else{
                nums[k]=nums[r];
                k++;
                l=r;
                r++;
            }
        }
        return k;
    }
};