class Solution {
public:


    int findMAX(vector<int>piles){
            int maxi=INT_MIN;
            int n=piles.size();

        for(int i=0;i<n;i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        return maxi;
        }

    //function to calculate my totalHOurs
        long long totalhrs(vector<int>arr, int n){
            // here 'n' is the no. of bananas that koko can eat in a hour
            // so this function has been made so that we can calculate the total time koko will take to finish all bananas
            // with the given 'n' let's say n=1 banana/hr then we calculate how much time it will take  to finish all bananas
            // given that koko eats only 1 banana per hour

            long long totalhours=0;
            for(int i=0;i<arr.size();i++){
                totalhours+=ceil((double)arr[i]/n);

                //since ceil returns the smallest value  that is greater than equal to 'x' so
                //suppose we have [3.7] and we want the smallest value >=x then that value is 4
                // and for that reasons we are converting these to double so we have a decimal value i guess?not sure check!
            }
            return totalhours;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
    
              int low=1;
              int high=findMAX(piles);
              int ans=INT_MAX;

              while(low<=high){
                int mid=(low+high)/2;

                long long totalhours=totalhrs(piles, mid);
                
                if(totalhours<=h){
                    ans=mid;
                    high=mid-1;

                }
                else{
                    //totalhours are taking alot more time than the given 'h' hours
                    //meaning koko needs to eat more bananas per hour so we increae low
                    low=mid+1;
                }
              }

              return ans;


            }
};