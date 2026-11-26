class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>mpp={
            
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}
         };

         int total=0;

        

        int i=0;
        while(i<s.size()){
           
           if(mpp[s[i]]<mpp[s[i+1]]){
                // IX
                total+=mpp[s[i+1]]-mpp[s[i]];
                i+=2;
           }
           else{
            total+=mpp[s[i]];
            i++;
           }

        }
        return total;

    }
};