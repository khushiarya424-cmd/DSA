class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(s.begin(), s.end());   //cookie sizes wala
         sort(g.begin(), g.end());  //greed factor wala
         int i=0;
         int j=0;   //size cookie array
         int count=0;
         while(j<s.size()){
               
               if(i<g.size() && g[i]<=s[j]){
                  count++;
                  i++;
                 
               }
                j++;
              
         }
         return count;

    }
};