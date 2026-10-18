class Solution {
public:
    string removeOuterParentheses(string s) {
        // primitiive means string is 1. Non empty 2. cannot be split e.g. (()) is primitive
        // e.g. ()() is Non primitive

     int count=0;
     int start=0;
     
     string res="";

     for(int i=0; i<s.size(); i++){

        if(s[i]=='('){
            count++;
        }
        if(s[i]==')'){
            count--;
        }
        if(count==0){
            // means we've reached end of one pair or maybe reached end of full s
           for(int j=start+1; j<i; j++){
                 res+=s[j];
           }
           start=i+1;

        }
     }
     return res; 
    }
};