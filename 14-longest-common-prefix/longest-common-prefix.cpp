class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // we are given a vector of string datatype so
        // if vector is {"flower", "flow", "flight"}
        // then index=0 means "flower" index=1 means "flow" index=2 means "flight"

        // first we sort them because that brings them in lexicographical order
        // then we compare the first and last word because whatever they have in common the middle words(beech wale indices p)
        //.. they definitely have them

        sort(strs.begin(), strs.end());
        // using the above example it becomes after sorting: flight flow flower

        // now we only iterate till the minimum length word of the two

        string word1=strs[0];
        int n=strs.size();
        string word2=strs[n-1];
        int minLength=min(word1.size(), word2.size());

        string res="";

        for(int i=0; i<minLength; i++){
            if(word1[i]!=word2[i]){
               break;
            }
            else{
                res+=word1[i];
            }
        }
        return res;
    }
};