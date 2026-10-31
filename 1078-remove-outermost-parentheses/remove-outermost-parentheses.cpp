class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int count=0;
        int start=0;
        int index=-1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            if(count==0){
                index=i;
                for(int j=start+1; j<index; j++){
                     res+=s[j];
                }
                start=index+1;
                
            }
        }
        return res;
    }
};