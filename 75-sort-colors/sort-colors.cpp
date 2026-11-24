class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //2 0 2 1 1 0
        // count approach
        int count_zero=0;
        int count_ones=0;
        int count_two=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count_zero++;
            }
            else if(nums[i]==1){
                count_ones++;
            }
            else{
                count_two++;
            }
        }
        int i=0;
        while(count_zero!=0){
           nums[i]=0;
           i++;
           count_zero--;
        }
        while(count_ones!=0){
            nums[i]=1;
            i++;
            count_ones--;
        }
        while(count_two!=0){
            nums[i]=2;
            i++;
            count_two--;
        }
        
    }
};