class Solution {
public:
    string removeKdigits(string num, int k) {
         
         stack<char>st;

         int n=num.size();

         for(int i=0;i<n; i++){

            while(st.empty()==false && k>0 && (st.top()-'0')>num[i]-'0'){

                st.pop();
                k=k-1;
            }
            st.push(num[i]);

         }

         //now even after traversal if k is still not zero

         while(k>0){
            st.pop();
            k=k-1;
         }

         //check if stack is empty

         if(st.empty()==true){

            return "0";

         }

         //for other cases

         string result="";

         while(st.empty()==false){

            //put elements from stack to string

            result.push_back(st.top());
            st.pop();

         }

         reverse(result.begin(), result.end());

         int start=0;

         while(start<result.size() && result[start]=='0'){

            start++;

         }

         int string_size=result.size();


        if(start==result.size()){
            return "0";
        }
     
         string answer=result.substr(start, string_size-start);
         
         

         if(result.empty()==true){
            return "0";
         }

         return answer;
         

        
    }
};