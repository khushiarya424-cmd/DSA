class Solution {
public:
    string largestOddNumber(string num) {

        
         int OddIndex=-1;
         string ans="";
         int i=num.size()-1;
        while(i>=0 && (num[i]-'0')%2==0){

            // first we skip even numbers from the back 
           i--;
           

        }

        if(i<0){
            return ans;
        }

        OddIndex=i;
        int start=0;

          while(start<=OddIndex && num[start]==0){

            start++;
            
            //now we try to ensure for leading zeroes like if input is 01235
            // then output should be 1235 so our answer must not include leading zeroes
           // so what we are doing basically is we iterate from start 0 till our OddDigit
           // if it finds any leading zeroes it does start++ and if no leading zeroes then it exits this loop
           // and return the desired substring 

        }
        ans=num.substr(start, OddIndex-start+1);
        return ans;

            
        
        
    }
};