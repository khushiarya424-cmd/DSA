class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //we need to have PSE(previous smaller element)
        // and we need to have NSE (next smaller element)

        long long area=0;

        int maxArea=0;

        vector<int>nse=findNSE(heights);
        vector<int>pse=findPSE(heights);

        for(int i=0;i<heights.size(); i++){
            
            long long left=i-pse[i];
            long long right=nse[i]-i;

            long long width=(left+right)-1;

            area=1LL*width*heights[i];

            if(area>maxArea){
                maxArea=area;
            }


            
        }

        return maxArea;


    }

    vector<int>findNSE(vector<int>arr){
        
        int n=arr.size();
        vector<int>result(n);

        stack<int>st;

        for(int i=n-1;i>=0;i--){

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