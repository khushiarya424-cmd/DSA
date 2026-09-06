class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int>st;

        vector<int>ans;

        unordered_map<int, int>mpp;

      
      for(int i=0;i<nums2.size(); i++){

        while(st.empty()==false && st.top()<nums2[i]){
            mpp[st.top()]=nums2[i];
            st.pop();
        }

        st.push(nums2[i]);

      }

      //now we are outside the stack

      while(st.empty()==false){
        //jab tk stack khali ni hota
        //basically if hum upaar wali for-loop ke bahar aagye h and still stack mein elements kuch remaining hai
        // that means that there in no greater elements for them
        // e.g. [1,3,4,2] now here when you are finding greater element for '4' so your stack must be looking like
        // stack [ 4, 2] now here 2 is obviously not greater than 4 so we don 't put it in map
        // we come outside of map and here we are basically mappinng those elements to -1 since 
        // since.. in the given array there's no element greater to these elements on their right side

        mpp[st.top()]=-1;
        st.pop();
      }

      for(int i=0;i<nums1.size(); i++){
        
        ans.push_back(mpp[nums1[i]]);
      }
      return ans;
        
    }
};