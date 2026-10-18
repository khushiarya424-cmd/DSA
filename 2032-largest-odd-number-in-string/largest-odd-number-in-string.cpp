class Solution {
public:
    string largestOddNumber(string num) {
    
    int i=num.size()-1;
    int index=-1;
    while(i>=0 && (num[i]-'0')%2==0){
        i--;
    }

    index=i;


    string res="";
  if(index<0){

    return "";

  }

  for(i=0; i<=index; i++){
    res+=num[i];
  }

  return res;







        
    }
};