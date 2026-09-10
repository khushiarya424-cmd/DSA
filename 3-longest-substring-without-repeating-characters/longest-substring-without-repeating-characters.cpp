class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0;
        int r=0;
        int n=s.size();

        int maxLen=0;

        int hash[256];

        for(int i=0;i<256; i++){
            hash[i]=-1;
        }

        while(r<n){

          //i check if that character already exists in the map

          if(hash[s[r]]!=-1){
            
            // if its not -1 then it means that character has already occured before

            // so it means we encountered a repeating character
           

            if(hash[s[r]]>=l){

                // e.g. in the string " abcabcbb when you reach this "bcab" where l=1 index and r=4 at s[r] 'b' is repeating
                
                // so we need to update left pointer
                l=hash[s[r]]+1;

                // hash[s[r]]='b' at index 1 so now my left pointer comes at index 2 char 'c

            }     

          }

          int len=r-l+1;


          maxLen=max(maxLen, len);

          hash[s[r]]=r;

          r++;


        }

        return maxLen;
        
        
        
   }
};