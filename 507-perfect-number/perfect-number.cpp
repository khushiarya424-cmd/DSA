class Solution {
public:
    bool checkPerfectNumber(int num) {

        if(num<=1){
            return false;
        }
        vector<int>res;

        res.push_back(1);
         
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                res.push_back(i);

                if((num/i)!=i){
                    res.push_back(num/i);
                }
            }
        }
      int sum=0;
        for(int i=0; i<res.size(); i++){
            sum+=res[i];
        }
        if(sum==num){
            return true;
        }
        else{
            return false;
        }
    }
};