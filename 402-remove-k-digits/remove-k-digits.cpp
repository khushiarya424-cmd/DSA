class Solution {
public:
    string removeKdigits(string num, int k) {
        int count=1;

        stack<char>st;

        int n=num.size();

        for(int i=0; i<n; i++){

            while(st.empty()==false && count<=k && num[i]-'0'<st.top()-'0'){
                  st.pop();
                  count++;
            }

            st.push(num[i]);
        }

        while(count<=k && st.empty()==false){
            st.pop();
            count++;
        }

        if(st.empty()==true){
            return "0";
        }
        string ans="";

        int n2=st.size();

        while(n2!=0){
            ans+=st.top();
            st.pop();
            n2--;
        }

        reverse(ans.begin(), ans.end());
        //before--> 0020 after--> 0200

        int j=0;

        while(j<ans.size()-1 && ans[j]=='0'){
            j++;
        }
        int start=j;
        string res="";

        for(int i=start; i<ans.size(); i++){
            res+=ans[i];
        }
        return res;
    }
};