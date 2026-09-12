class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int l=0;    // we use this pointer for traversing in cookie_size array
        int r=0;    // we use this pointer for traversing in greed factor wala array

        // we check for every cookie ki kya hum ye cookie se iss bche ki greed satisfy kr skte h?

        int m=s.size();   //cookie size array
        int n=g.size();

        sort(g.begin(), g.end());
        // sorting the greed factor array
        sort(s.begin(), s.end());
        // sorting the cookie_size array

        while(l<m && r<n){

            if(g[r]<=s[l]){
                r=r+1;
            }

            l=l+1;

        }

        return r;

        
    }
};