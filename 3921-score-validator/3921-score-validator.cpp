class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {

        int n=events.size();
        vector<int> ans;

        int score=0;
        int counter=0;

        for(int i=0;i<n;i++){
            if(counter==10){
                ans.push_back(score);
                ans.push_back(counter);
                return ans;
            }

            if(events[i]=="W"){
                counter++;
            }
            else if(events[i]=="WD"){
                score++;
            }
            else if(events[i]=="NB"){
                score++;
            }

            else{
                int value=stoi(events[i]);
                score+=value;
            }  
        }

        ans.push_back(score);
        ans.push_back(counter);

        return ans;
        
    }
};