class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        int start=0;
        string ans="";
        // new string created for storing purpose
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                //inner-loop
                for(int j=start+1;j<=i-1;j++){
                    ans+=s[j];
                }
                start=i+1;
                // moving towards finding new primitive if there is any
            }
        }
        return ans;
        
    }
};