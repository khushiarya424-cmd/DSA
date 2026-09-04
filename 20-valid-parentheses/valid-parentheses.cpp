class Solution {
public:
    bool isValid(string s) {

        // so what we're doing is basically inserting the elements as long as we're inserting
        // inserting open bracket character like ( [ {
        // but if we encounter any character thats a closing bracket like ) ] } then we check st.top()
        // because if we're about to insert ) then the top of my stack better be ( but if its something like
        // in this example string= ( [ ) ]  here index=0 put in stack, index=1 put in stack
        // now see index=2 its ')' now we check st.top(), its [ so we return false

        stack<char>st;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }

            else{
                 if(st.empty()==true){

                    // meaning let's say s[i]==')' but stack is empty it has no opening bracket
                    // so its definitely an in-valid string
                  return false;
                }


                if(s[i]==')' && st.top()!='('){
                return false;
                  }
               if(s[i]==']' && st.top()!='['){
                return false;
                }
              if(s[i]=='}' && st.top()!='{'){
                return false;
               }
              

            st.pop();


            }
        }

        return st.empty();
        //  in the last if our stack has some elements meaning it was not valid so we return false
        // in the end  if stack was empty meaning it was valid so return true

        
    }
};