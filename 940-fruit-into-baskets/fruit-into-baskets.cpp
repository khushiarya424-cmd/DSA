class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=0;
        //we are allowed to have at most 2 types of fruits
        unordered_map<int, int>mpp;

        int left=0;

        for(int right=0; right<fruits.size(); right++){

               mpp[fruits[right]]++;

               //putting the fruit type in map first
               // now to check how many fruits do we have so far so to know if it has exceeded the limit of max 2 fruits or not?

               while(mpp.size()>2 && left<right){
                    mpp[fruits[left]]--;

                    if(mpp[fruits[left]]<=0){
                        mpp.erase(fruits[left]);
                    }
                    left++;
               }

               if(mpp.size()<=2){
                maxi=max(maxi, right-left+1);
               }
        }
        return maxi;
    }
};