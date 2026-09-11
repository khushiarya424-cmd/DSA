class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
    
 
        // since we're not allowed to have more than 2 types of fruits

        // we  use a map to keep track of unique fruits

        int l=0;
        int r=0;

        int maxlen=0;

        unordered_map<int,int>mpp;

        while(r<fruits.size()){

            //push that element in map

            mpp[fruits[r]]++;

            if(mpp.size()>2){

                //exceeded size

                // we shrink

                while(mpp.size()>2){
                    mpp[fruits[l]]--;

                    if(mpp[fruits[l]]==0){
                        mpp.erase(fruits[l]);
                    }

                    l++;

                    //jese hi valid  window mein ajayega we exit the while loop
                }

            }

            if(mpp.size()<=2){
                
                maxlen=max(maxlen, r-l+1);
            }

            r++;

            
        }

        return maxlen;



    }
};