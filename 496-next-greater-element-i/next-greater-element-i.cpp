class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        int n=nums2.size();
        int n1=nums1.size();

        unordered_map<int,int>mpp;
        

        for(int i=n-1; i>=0; i--){

             while(st.empty()==false && st.top()<=nums2[i]){
                st.pop();
             }

             if(st.empty()==true){
                //means for this ith element koi Next greater nhi hai 
                mpp[nums2[i]]=-1; //we are mapping this element to -1 in the map

             }
             else{
                //means empty nhi h stack and top element greater hai ith element se
                mpp[nums2[i]]=st.top();
             }
             st.push(nums2[i]);
        }

        vector<int>ans(n1);

        for(int i=0; i<n1; i++){
           ans[i]=mpp[nums1[i]];
        }

        return ans;


    }
};