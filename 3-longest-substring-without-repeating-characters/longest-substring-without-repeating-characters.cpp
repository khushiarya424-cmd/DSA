class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         
          //abcabcbb
          int l=0;
          int r=0;
          int maxlen=0;

          unordered_map<char, int>mpp;
          

          while(r<s.size()){
             
             if(mpp.find(s[r])!=mpp.end()){

                //abca if 'a' already exists in map
                while(l<=r && mpp.find(s[r])!=mpp.end()){
                       
                        
                            mpp[s[l]]--;

                            if(mpp[s[l]]<=0){
                                mpp.erase(s[l]);
                            }
                        
                        l++;
                }      
             }

              maxlen=max(maxlen, r-l+1);
                mpp[s[r]]++;
                r++;
              
              
          }
          return maxlen;
    }
};