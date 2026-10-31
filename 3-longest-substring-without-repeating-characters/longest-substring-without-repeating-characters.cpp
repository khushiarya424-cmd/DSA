class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
        int l=0;
        int r=0;
        int maxlen=0;

        int hash[256]={0};

        while(r<s.size()){

            hash[s[r]]++;   //insert

            if(hash[s[r]]>1){

                while(l<r && hash[s[r]]>1){

                  hash[s[l]]--;
                    
                    l++;
                }

            }
            
            maxlen=max(maxlen, r-l+1);

            r++;

        }
        return maxlen;
    }
};