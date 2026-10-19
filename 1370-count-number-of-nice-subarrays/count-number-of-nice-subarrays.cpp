class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
           return AtMost(nums,k)-AtMost(nums,k-1);
    }

    int AtMost(vector<int>& nums, int k){
         
         int left=0;
         int count=0; //ans
         int count_of_odd=0;
         for(int right=0; right<nums.size(); right++){
              
           //for e.g. if k=2 so first we find subarrays that have 2 odd numbers and then we find subarrays with 1 odd number
           // and then subtract it 

           if(nums[right]%2!=0){
            count_of_odd++;
           }
           while(count_of_odd>k && left<right){

            if(nums[left]%2!=0){
                count_of_odd--;
            }
            left++;
              
           }

           if(count_of_odd<=k && left<=right){
               
                count=count+(right-left+1);
           }
               
         }
         return count;
         
    }
};