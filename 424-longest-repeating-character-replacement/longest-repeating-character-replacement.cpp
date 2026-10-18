class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxi=0;

        unordered_map<char, int>mpp;

        for(int right=0; right<s.size(); right++){
           
           mpp[s[right]]++;

           int max_in_map=0;

           for(auto it:mpp){
              
              if(it.second>max_in_map){
                max_in_map=it.second;
              }

           }

           while((right-left+1)-max_in_map>k  && left<right){

                  mpp[s[left]]--;

                  if(mpp[s[left]]<=0){
                    mpp.erase(s[left]);
                  }
                  max_in_map=0;   //Reset
                  for(auto it:mpp){

                    //recalculating max

                    if(it.second>max_in_map){
                        max_in_map=it.second;
                    }
                  }
                  left++;

                   
           }

           maxi=max(maxi, right-left+1);

        }

        return maxi;
    }
};