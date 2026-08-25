class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        //sorting because that brings our strings in lexicographical order
        string first=strs[0];

        string last=strs[strs.size()-1];

        string ans="";

        int minLength=min(first.size(), last.size());

        for(int i=0;i<minLength;i++){
            if(first[i]==last[i]){
               ans+=first[i];
            }
            else{
                break;
            }
        }
        return ans;


        
    }
};