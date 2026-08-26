class Solution {
public:
    int myAtoi(string s) {
        
        int sign=1;
        int i=0;
        //initialy we assume sign to be positive so we took int sign=1
        
        //skipping leading spaces
        while(i<s.size() && s[i]==' '){
            i++;
        }

        //find sign

        if(i<s.size() && s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            i++;
        }

        long long ans=0;
        // why? long long because if s="9999999999999999999999" so if "ans" is "int" so we won't even get the chance to
        // do "rounding" or "clamping" or whatever the word is 

        // now checking whether the next character encountered is an integer or not?

        while(i<s.size() && s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
            // here when i encountered a genuine integer so to bring it in integer form i did
            // s[i]-'0'  like '7'-'0' is 7
            ans=ans*10+digit;
            i++;
            
            long long limit=-(long long)INT_MIN;
            if(sign==1 && ans>INT_MAX){
                return INT_MAX;
            }
            if(sign==-1 && ans>limit){
                return INT_MIN;
            }
        }
        return sign*ans;
        
    }
};