class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        // event1=["01:15", "02:00"]
        
        string start1=event1[0];  //"01:15"
        int startTime1=convertToMinutes(start1);  //"01:15"  --> 75
        
                         
        string end1=event1[1]; 
        int endTime1=convertToMinutes(end1);  // "02:00" -->120


        string start2=event2[0]; //"02:00"   --->120
        int startTime2=convertToMinutes(start2);

        string end2=event2[1]; //"03:00"   -->180
        int endTime2=convertToMinutes(end2);
          

         if(startTime2==endTime1 ){
            return true;
         }
         if(startTime2<endTime1 && endTime2>=startTime1 && endTime2<=endTime1){
            return true;
         }
         if(startTime2<endTime1 && endTime2>=startTime1){
            return true;
         }
         else{
            return false;
         }

    }

    int convertToMinutes(string time){
        
        //"01:15"

        int hours=time[0]*10+time[1];
        int minutes=time[3]*10+time[4];

        int total=hours*60+minutes;

        return total;
    }
};