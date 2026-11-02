class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int>mpp;
        vector<int>ans(2);
       
        for(int i=0; i<numbers.size(); i++){

            int need=target-numbers[i];  //like 9-2

            if(mpp.find(need)!=mpp.end()){
                 
                 ans[0]=mpp[need];
                 ans[1]=i+1;     
            }
            mpp[numbers[i]]=i+1;
        }
        return ans;
    }
};