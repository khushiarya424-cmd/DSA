class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
           
           // 100 4 200 1 3 2
           if(nums.empty()==true){
            return 0;
           }
         int maxcount=1;

         unordered_set<int>st;

         for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
         }
         
         for(auto it:st){
                  int count=1;
             if(st.find(it-1)==st.end()){
                //agr usse chota element nhi exist krta hai

                while(st.find(it+1)!=st.end()){
                        count++;
                        maxcount=max(maxcount, count);
                        it=it+1;
                }
             }
         }
         return maxcount;

    }
};