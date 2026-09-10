class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int l=0;
        int r=0;

        int countzeroes=0;

        int maxlen=0;

        while(r<nums.size()){
          
          if(nums[r]==0){
            countzeroes++;
          }
          if(countzeroes<=k){
            int len=r-l+1;

            maxlen=max(maxlen, len);

            r++;
          }

          if(countzeroes>k){
            
            while(countzeroes>k){
            if(nums[l] == 0){
                countzeroes--;
            }
            l++;

            // basically what we are doing here is that when we reach a point where countzeroes>k so what we do is
            // we keep shrinking till once again our window becomes valid i.e. 
            // a valid windo means substring with 'k' zeroes as per given in input parameter

            // basically look at this [1, 1, 1, 0, 0, 0] now here at r=5 you encounter countzeroes>k because k=2 was given
            // so what you do is you keep shrinking that is moving l++ till countzeroes becomes once again <=k
            // so now here in the given condition your l=0 and r=5 here you get coountzeroes'3'

        
          }
          r++;
          }
            
        }
        return maxlen;
    }
};