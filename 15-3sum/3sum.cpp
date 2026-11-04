class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort
        sort(nums.begin(), nums.end());
        int n=nums.size();

        vector<vector<int>>ans;
        for(int i=0; i<nums.size(); i++){

            // to ensure we don't repeat the same ith value again
            // like if ek bar -1 process krliya as i toh ye waps -1 hi process na krle
            if(i>0 && nums[i]==nums[i-1]){
                continue; // skip that iteration
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(sum<0){
                    // remember humne array pehle hi sort krliya h upr so if sum<0 that means we need bigger number
                    // so we move our 'j'
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    // else means sum==0 hai exactly what we want
                    vector<int>temp={nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    // now we move both j and k like j++ k--
                    j++;
                    k--;
                    // but we also need to ensure that j and k repeat na ho waps for the same i
                    // let's say i=2 and j=0 and k=-2 now what if on doing j++ and k-- you get the same 0 and -2 again
                    // so that would produce the same triplet again and we don't want duplicates so
                    while(j<k && nums[j]==nums[j-1]){
                        j++;  //jab tk same hai j aur j-1 aage badhte jao because we don't need that value
                    }

                    while(j<k && nums[k]==nums[k+1]){
                        // similarly
                        k--;      
                    }
                }
            }
        }
        return ans;
    }
};