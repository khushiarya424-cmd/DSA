class Solution {
public:
    string longestPalindrome(string s) {
        //odd length case assuming/expecting our pallindrome is of odd length
        //What if s[i] is the middle element of an odd-length palindrome?”
       // We assume the current element s[i] is the possible middle of the palindrome and then expand outward:
     //In the odd case, we check whether an odd-length palindrome exists with the current element as its center.
        int start=0;
        int maxLength=1;
        
        
        //odd
        for(int i=0;i<s.size();i++){

            int left=i;
            int right=i;

            while(left>=0 && right<s.size() && s[left]==s[right]){
                //if left and right are same so we expaand and check their neighbouring elemnts
                int currentlength=right-left+1;

               if(currentlength>maxLength){
                maxLength=currentlength;
                start=left;
               }

                left--;
                right++;


            }

            //if not above case so we check even case

            //“What if the center of an even-length palindrome lies between s[i] and s[i+1]?”
            //s[i] == s[i + 1]
            //If they are equal, then we have an even-length palindrome of length 2, and we try expanding:
            //and check the outer characters.


            //Even case: Maybe the space between the current element and the next element is the center of an even-length ////palindrome. We first check whether those two elements are equal.

            //Odd case: Maybe the current element is the center of an odd-length palindrome.


            //even case:
            left=i;
            right=i+1;

            while(left>=0 && right<s.size() && s[left]==s[right]){

               int currentlength=right-left+1;

                if(currentlength>maxLength){
                    maxLength=currentlength;
                    start=left;
                }
                left--;
                right++;

            }
        }

        return s.substr(start,maxLength);
    }
};