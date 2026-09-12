class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
      // we need to keep track of no. of notes that we receive of 5 dollar and 10 dollar

      int five=0;
      int ten=0;

      int l=0;


      while(l<bills.size()){

        if(bills[l]==5){
            five++;
            l++;
        }
        else if(bills[l]==10){

            //change dena hai 5 dollar ka so

            if(five==0){

                // meaning 5 ka note hi nhi hai

                return false;
            }

            five--;
            ten++;
            l++;
        }

        else{
              // bill 20 ka hai so change 15 ka bana
            if(ten>=1 && five>=1){
               ten--;
               five--;
               l++;
            }
            else if(ten<1 && five>=3){
                five-=3;
                l++;
            }
            else{

                // meaning change nhi hai
                return false;
            }
        }

      }
      return true;
    }
};