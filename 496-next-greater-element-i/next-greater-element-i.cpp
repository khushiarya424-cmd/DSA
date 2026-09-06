class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
                int index=-1;
                int greater=-1;
            for(int j=0;j<nums2.size(); j++){
                if(nums2[j]==nums1[i]){
                    index=j;
                    break;
                }
            }
            for(int k=index+1; k<nums2.size(); k++){


                if(nums2[k]>nums1[i]){
                    greater=nums2[k];
                    break;
                }
                while(st.empty()==false && nums2[k]>nums1[i]){
                    st.pop();
                }
            
              st.push(nums2[k]);
                
            }
            ans.push_back(greater);
        }
        return ans;
  


        
    }
};