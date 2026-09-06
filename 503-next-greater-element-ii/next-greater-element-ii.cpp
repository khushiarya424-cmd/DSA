class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n=nums.size();
        vector<int>result;
       

        for(int i=0;i<nums.size(); i++){

             int ans=-1;

             
             int j=(i+1)%n;

             int count=0;
            while(count<n){

                count++;

                if(nums[j]>nums[i]){
                    ans=nums[j];
                    break;
                }
                j=(j+1)%n;
            }
            result.push_back(ans);
            

        }
        return result;
        
    }
};