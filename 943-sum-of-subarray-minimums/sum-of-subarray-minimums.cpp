class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        //[3,1,2,4]

      // now the question is to find out "minimum" element in all possible subArrays and then add them

      //[ 1,4,6,7,3,7,8,1]
      //let's take '3' now 3 kha kha minimum hai? e.g. 3 then 3,7 then 3,7,8 then 7,3 then 6,7,3 then 4,6,7,3

      //3  se right ki taraf kitne elements hai jaha tk 3 minimum hai jin subarrays mein?
      // for that we find NSE and that is '1' at last index

      // similarly 3 se pehle kitne elements hai jha 3 minimum hai?
      // for that we find PSE, and that is again '1' on 0th index 

    
        //storing NSE vector that we received from findNSE() function
        //storing PSE vector that we received from findPSE() function

        vector<int>NSE=findNSE(arr);

        vector<int>PSE=findPSE(arr);

        int total=0;
        int mod=(int)(1e9+7);


        for(int i=0;i<arr.size(); i++){

            int left=i-PSE[i];

            int right=NSE[i]-i;

            total=(total+(right*left*1LL*arr[i])%mod)%mod;

            //basically jese [3,1,2,4] hai ab yaha 1 kitne subarrays mein minimum hai? [1] [3,1] [3,1,2] [3,1,2,4]
             //                                                [1,2,4] [1,2] so there are 6 subarrays where 1 is minimum
             


        }
        return total;
    }

    vector<int>findNSE(vector<int>arr){

        int n=arr.size();

        vector<int>result(n);

        stack<int>st;

        for(int i=n-1; i>=0; i--){

            while(st.empty()==false && arr[st.top()]>=arr[i]){

                 st.pop();

            }

            if(st.empty()==true){
                result[i]=n;
            }
            else{
                result[i]=st.top();
            }

            st.push(i);
        }

        return result;
    }

    vector<int>findPSE(vector<int>arr){
        int n=arr.size();

        vector<int>result(n);

        stack<int>st;

        for(int i=0; i<n; i++){

            while(st.empty()==false && arr[st.top()]>arr[i]){
                st.pop();
            }

            if(st.empty()==true){
                result[i]=-1;
            }
            else{
                result[i]=st.top();
            }
            st.push(i);
        }

        return result;
    }




};

