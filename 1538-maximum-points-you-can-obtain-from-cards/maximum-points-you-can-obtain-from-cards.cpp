class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int leftSum=0;

        int rightSum=0;

        int maxSum=0;

        int n=cardPoints.size();

        for(int i=0;i<k; i++){
            //initially left se we added 'k' elements
            //like if k=4 hai then we added 0,1,2,3

            leftSum+=cardPoints[i];
            //and we assume it to be maxSum so far

            maxSum=max(maxSum, leftSum);
        }

        int rightIndex=n-1;

        // now we check that instead of taking all elements from left
        // we try to check by reducing one element from leftSum and adding one element from Right side

        for(int i=k-1; i>=0; i--){
            leftSum=leftSum-cardPoints[i];

            rightSum=rightSum+cardPoints[rightIndex];

            rightIndex--;
             
            maxSum=max(maxSum, leftSum+rightSum);

        }

        return maxSum;
    }

    
};