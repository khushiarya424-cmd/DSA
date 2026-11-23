class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=-1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                index=i;
                break;
            }
        }
        if(index!=-1){
           
           for(int j=index+1;j<nums.size(); j++){
              if(nums[j]!=0){
                swap(nums[index], nums[j]);
                index++;
              }
           }

        }
    }
};