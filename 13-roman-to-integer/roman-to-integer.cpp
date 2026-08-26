class Solution {
public:
    int romanToInt(string s) {

        int result=0;

        unordered_map<char,int> mpp={
            {'I',1}, {'V',5}, {'X',10},{'L',50}, {'C',100}, {'D',500}, {'M',1000}

        };
          int i=0;
          while(i<s.size()){

           if(mpp[s[i]]<mpp[s[i+1]]){
            result+=mpp[s[i+1]]-mpp[s[i]];
            i+=2;
           }
           else{
            result+=mpp[s[i]];
            i++;
           }
        }
        return result;
        
    }
};