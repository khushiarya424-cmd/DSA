class Solution {
public:
    int numberOfSubstrings(string s) {

      int count=0;

      int lastSeen[3]={-1, -1, -1};
      // array of size 3 since question states ki three hi characters hai

      for(int i=0;i<s.size(); i++){

        lastSeen[s[i]-'a']=i;
        // storing index

        if(lastSeen[0]!=-1 && lastSeen[1]!=-1 && lastSeen[2]!=-1){

            count=count+1+min({lastSeen[0], lastSeen[1], lastSeen[2]});

            //why have we written it like this? since normal min(a,b) allows only 2 arguements
            // since we had to compare among more than 2 characters so we used this {} inside
        }
      }

      return count;
        
    }

    
};