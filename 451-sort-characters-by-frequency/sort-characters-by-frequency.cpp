class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
         //inserting characters in map with their frequency
            mpp[s[i]]++;
        }
        //now i will be creating a vector of datatype PAIR where i will be inserting
        //.. (frequency, character) why am i inserting frequency first?
        // because since the my goal is to sort characters by their frequency in descending order
        // and since i want my elements to be sorted based on "frequency" so this is the reason
        // that i am putting frequency first and then character in a pair
        // also the sort() function when it sorts "pair" it sorts based on .first
        // if for two pairs .first is equal then only it goes further and compares .second

        vector<pair<int,char>>vec;

        //there i go inserting pair of frequency and character from my map
        for(auto it:mpp){
            vec.push_back({it.second, it.first});
        }
        // now i sort them in descending order

        sort(vec.begin(), vec.end(), greater<>());
         
         //now i construct my string using string() its a class in c++
         //its one of the formats of constructing strings is string(number, character)

         // it means "repeat" that character in the string "number" times
         // so if string(3, 'a) it prints "aaa"


        string ans="";

        for(auto it:vec){
            ans+=string(it.first, it.second);
        }

        return ans;






    }
};