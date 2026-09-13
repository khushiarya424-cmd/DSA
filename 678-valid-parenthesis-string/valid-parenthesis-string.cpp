class Solution {
public:
    bool checkValidString(string s) {
       
       int minOpen=0;
       int maxOpen=0;

       int i=0;

       while(i<s.size()){

        
        if(s[i]=='('){

            minOpen++;
            maxOpen++;
        }

        if(s[i]==')'){

            minOpen--;
            maxOpen--;
        }

        if(s[i]=='*'){

            minOpen--;
            maxOpen++;
        }

        

        if(minOpen<0){
            minOpen=max(0, minOpen);
        }

        if(maxOpen<0){
            return false;
        }

        i++;

       }

      
      if (minOpen==0){
        return true;
      }

      // but what happens if minOpen!=0
      return false;
       
     
    }
};