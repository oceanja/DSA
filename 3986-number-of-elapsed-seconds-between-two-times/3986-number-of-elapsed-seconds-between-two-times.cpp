class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        // format "HH:MM:SS".

        int he = stoi(endTime.substr(0, 2)), hs = stoi(startTime.substr(0, 2)); 
        int me = stoi(endTime.substr(3, 2)), ms = stoi(startTime.substr(3, 2)); 
        int se = stoi(endTime.substr(6, 2)), ss = stoi(startTime.substr(6, 2)); 

        int start = hs * 3600 + ms * 60 + ss;
        int end = he * 3600 + me * 60 + se;
        return end - start;
     


        
    }
};