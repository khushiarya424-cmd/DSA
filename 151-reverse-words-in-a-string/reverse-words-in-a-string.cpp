class Solution {
public:
    string reverseWords(string s) {
        vector<string>result;

        string word="";
        for(int i=0;i<s.size();i++){
        // for traversing in the string it temporarily stores words
        if(s[i]!=' '){
            //if "space" hai
            word+=s[i];
            //insert that character into the word string

        }

        else if(s[i]==' ' && word.empty()==false){
            result.push_back(word);
            // basically suppose the input is "the sky is blue" so we don't push into vector everytime we see a nonspace char
            // like here we don't push as soon as we encountered 't' from "the" we only push when
            // string word is not empty and s[i] that we encountered is a space

            word="";
        }
        }

        //for inserting last word
        if(word.empty()==false){
            result.push_back(word);
        }

        //reverse the vector
        reverse(result.begin(), result.end());
        
        string final_result="";
        // since return type is string so we put final output from vector to string

        for(int i=0;i<result.size();i++){
            final_result+=result[i];

            if(i<result.size()-1){
                final_result+=" ";
            }
        }
        return final_result;


        
    }
};