class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int n=s.size();
        int r=n-1;

        while(l<r){
            if(isalnum(s[l])==false){
                l++;
            }
            else if(isalnum(s[r])==false){
                r--;
            }
            else{
                char ch1=tolower(s[l]);
                char ch2=tolower(s[r]);
                if(ch1 != ch2){
                    return false;
                }
                else{
                    l++;
                    r--;
                }
            }
            
        }
        return true;
    }
};