class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;

        for(int i=0;i<s.size(); i++){
            
            char ch1=s[i];
            char ch2=t[i];

            // now i check if ch1 exists as key in mpp1
            if(mpp1.count(ch1)==1){
                if(mpp1[ch1]!=ch2){
                    return false;
                }

            }

            if(mpp2.count(ch2)==1){
                if(mpp2[ch2]!=ch1){
                    return false;
                }
            }

            mpp1[ch1]=ch2;
            mpp2[ch2]=ch1;
        }
        return true;



    }
};