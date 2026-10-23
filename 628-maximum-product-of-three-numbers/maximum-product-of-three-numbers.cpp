class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // first sort

        sort(nums.begin(), nums.end());

        //suppose array is [-10, -9, 2, 1 ,3]
        // after sorting [-10, -9, 1 2 3]

        //now after sorting there are two possible cases:
    // CASE-I: product of last three elements after sorting
    //CASE-II: (negative numbers case): multiply the two smallest and one largest number
    // like in the example above -10*(-9)*3 produces--> 270

     int n=nums.size();
     int prod1=nums[n-1]*nums[n-2]*nums[n-3];
     int prod2=nums[0]*nums[1]*nums[n-1];

     int maxi=max(prod1, prod2);
     return maxi;
    }
};