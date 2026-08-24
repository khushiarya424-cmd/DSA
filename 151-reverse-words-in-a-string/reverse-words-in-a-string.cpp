class Solution {
public:
    string reverseWords(string s) {
        // we start traversing from the end of string

        int i=s.size()-1;

        string result="";

        

        while(i>=0){
         // first we remove all the spaces from the end if there are any like
         //suppose the input is "the sky is blue   ";
         //so here in this case we first use a while loop and keep iterating and decreasing i whenever we encounter a space
         // we STOP iterating whenever we encounter a "non-space" character


         // only after skipping the spaces we do
         //..... int end=i;
         // this way we are also ensured that int end=i points to a non-space character
         while(i>=0 && s[i]==' '){
            i--;
         }

         if(i<0){
            break;
            // example the string is s="          "" so in this case i can go OUT OF BOUNDS

         }

         int end=i; // since we have skipped through all the spaces from behind so this int end is surely
         // ... surely a non-space character

         while(i>=0 && s[i]!=' '){
            i--;
            // now we iterate on all the non space characters and as soon as we encounter a  SPACE we exit this loop
         }

         // extracting the word
         string word=s.substr(i+1, end-i);

         if(result.empty()==false){
            result+=' ';
         }
         result+=word;


        }
        return result;



        
    }
};




// Brute-force code 

//  string reverseWords(string s) {
//         vector<string>result;

//         string word="";
//         for(int i=0;i<s.size();i++){
        // for traversing in the string it temporarily stores words
        // if(s[i]!=' '){
            //if "space" hai
            // word+=s[i];
            //insert that character into the word string

        // }

        // else if(s[i]==' ' && word.empty()==false){
        //     result.push_back(word);
            // basically suppose the input is "the sky is blue" so we don't push into vector everytime we see a nonspace char
            // like here we don't push as soon as we encountered 't' from "the" we only push when
            // string word is not empty and s[i] that we encountered is a space

        //     word="";
        // }
        // }

        // //for inserting last word
        // if(word.empty()==false){
        //     result.push_back(word);
        // }

        //reverse the vector
        // reverse(result.begin(), result.end());
        
        // string final_result="";
        // since return type is string so we put final output from vector to string

    //     for(int i=0;i<result.size();i++){
    //         final_result+=result[i];

    //         if(i<result.size()-1){
    //             final_result+=" ";
    //         }
    //     }
    //     return final_result;


        
    // }