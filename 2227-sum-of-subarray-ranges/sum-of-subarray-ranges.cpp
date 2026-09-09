class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        //we create a function for finding subarray minimums
        // we create a function for finding subarray maximums

        // then we subtract their sumission 
      
        long long maxcount=maxSUM(nums);

        long long mincount=minSUM(nums);

        long long ans=maxcount-mincount;

        return ans;
      





    }

    
    long long minSUM(vector<int>&arr){

        //har element ka NSE and PSE chahiye hoga
        //NSE--> next smaller element
        //PSE--> prev smaller element

        //[1,4,6,7,3,7,8,1]
        vector<int>min_nse=findNSE(arr);
        vector<int>min_pse=findPSE(arr);
          long long totalcount=0;

          

        for(int i=0;i<arr.size(); i++){

            long long left=i-min_pse[i];

            long long right=min_nse[i]-i;

            totalcount=(totalcount+(right*left*1LL*arr[i]));


        }
        return totalcount;

          

    }

    vector<int>findNSE(vector<int>arr){
          
          // humein NEXT SMALLER element ka index return krna h
          // so we know that before that element ith element is the minimum for those subarrays
          // but we need the count so we use index
          //for storing indexes we create a vector

          

          int n=arr.size();

          vector<int>result(n);

          stack<int>st;

          for(int i=n-1;i>=0; i--){

            while(st.empty()==false && arr[st.top()]>=arr[i] ){
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

        stack<int>st;

        int n=arr.size();

        vector<int>result(n);
        for(int i=0;i<n; i++){

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

    long long maxSUM(vector<int>arr){
        
        // now we require PGE and NGE
        // for right we need NEXT GREATER 

        // for left we need PREVIOUS GREATER

        long long totalcount=0;

        vector<int>max_nge=findNGE(arr);

        vector<int>max_pge=findPGE(arr);

     

        int n=arr.size();

        for(int i=0;i<n; i++){

            long long left=i-max_pge[i];

            long long right=max_nge[i]-i;

            totalcount=(totalcount+(right*left*1LL*arr[i]));
        }
        return totalcount;


    }

    vector<int>findNGE(vector<int>arr){

          // next greater 

        

          int n=arr.size();
         vector<int>result(n);

         stack<int>st;

         for(int i=n-1; i>=0; i--){

            while(st.empty()==false && arr[st.top()]<=arr[i]){
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

    vector<int>findPGE(vector<int>arr){

        //prev greater

        int n=arr.size();

        vector<int>result(n);

        stack<int>st;

        for(int i=0;i<n;i++){

            while(st.empty()==false && arr[st.top()]<arr[i]){

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