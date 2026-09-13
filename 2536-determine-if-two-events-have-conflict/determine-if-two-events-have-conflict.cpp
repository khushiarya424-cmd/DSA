class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        
        string time_start1=event1[0];

        int time_start1_minutes=convert_to_minutes(time_start1);
        // event 1 ka vector looks like index=0 "01:15" and index 1 looks like "02:00"

        string time_end1=event1[1];

        // "02:00"

        int time_end1_minutes=convert_to_minutes(time_end1);

        //we pass the function a string like "01:15" then it gets convert to minutes

        string time_start2=event2[0];

        int time_start2_minutes=convert_to_minutes(time_start2);

        string time_end2=event2[1];

        int time_end2_minutes=convert_to_minutes(time_end2);

        // if end1<start2 then no conflict, if end2<start1 then no conflict
        if(time_end1_minutes<time_start2_minutes){
            return false;
        }

        else if(time_end2_minutes<time_start1_minutes){
            return false;
        }

        else{
            return true;
        }

    
    }

    // a function to convert given time to minutes

    int convert_to_minutes(string time){

        int hours=stoi(time.substr(0, 2));

        int minutes=stoi(time.substr(3,2));

        int totalMinutes=hours*60+minutes;

        return totalMinutes;     
          

    }
};