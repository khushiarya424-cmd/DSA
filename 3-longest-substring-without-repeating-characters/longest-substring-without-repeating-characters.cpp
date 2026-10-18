class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxi=0;
        int hash[256]={0};
        //hashmap declared with 0 

        for(int right=0; right<s.size(); right++){
            //first we insert each character's frequency into the hashmap
            hash[s[right]]++;

            //condition for duplicate case
            while(hash[s[right]]>1){
                hash[s[left]]--;
                left++;
            }
            
            //keeping track of max length found so far without duplciates
            maxi=max(maxi, right-left+1);

        }
        return maxi;
    }
};