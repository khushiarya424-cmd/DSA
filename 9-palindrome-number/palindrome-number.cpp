class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;

        }

        int x2=x;
        int rev=0;

        while(x2!=0){
           int last=x2%10;
           if(rev>INT_MAX/10 || rev==INT_MAX/10 && last>7){
            return false;
           }
           rev=rev*10+last;
           x2=x2/10;

        }
        if(rev==x){
            return true;
        }else{
            return false;
        }
    }
};