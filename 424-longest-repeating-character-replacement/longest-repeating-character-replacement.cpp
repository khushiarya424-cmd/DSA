class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l=0;
        int r=0;
        int maxfreq=0;

        int maxlen=0;

        int hash[26]={0};
        //hash-array

        while(r<s.size()){
        
        //do freq update in hashmap as you traverse in the array

           hash[s[r]-'A']++;

           //then i check the length and max freq

           maxfreq=max(maxfreq, hash[s[r]-'A']);

           // now we check if the changes to be made are within the allowed 'k' or not

           // for that we do len-maxfreq

          

           while(((r-l+1)-maxfreq)>k){

            //changes to be done are more than the allowed 'k'
            // so we shrink , we are decreasing in map
                 
                 hash[s[l]-'A']--;

                 // now we need to update maxfreq since vo change hoggyi hogi

                 maxfreq=0;

                 for(int i=0;i<26; i++){

                    maxfreq=max(maxfreq, hash[i]);
                 }

                 l=l+1;
           }

           if(((r-l+1)-maxfreq)<=k){

            maxlen=max(maxlen, r-l+1);
           }

           r++;



        }

        return maxlen;


    }
};