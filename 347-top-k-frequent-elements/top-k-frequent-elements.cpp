class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mpp;

        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
            //putting elements in the map with their freq
        }
        
        while(k!=0){

            int maxi=0;
            int element=0;

            for(auto it:mpp){
                if(it.second>maxi){
                    maxi=it.second;
                    element=it.first;
                }
            }
            ans.push_back(element);
            mpp.erase(element);
            k--;

        }
        return ans;
    }
};