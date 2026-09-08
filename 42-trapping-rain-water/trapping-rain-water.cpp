class Solution {
public:
    int trap(vector<int>& height) {

        int n=height.size();
        
        int totalcount=0;

        int l=0; //left-pointer
        int r=n-1;

        int leftmax=0;
        int rightmax=0;

        while(l<r){

            if(height[l]<=height[r]){
                if(leftmax>height[l]){
                    totalcount+=leftmax-height[l];
                }
                else{

                    leftmax=height[l];
                }
                l=l+1;
                
            }
            else{

                // right arr[r] chota h arr[l]  se then

                if(rightmax>height[r]){
                    totalcount+=rightmax-height[r];
                }
                else{
                    rightmax=height[r];
                }
                r=r-1;
            }

        }
        return totalcount;


    }
};