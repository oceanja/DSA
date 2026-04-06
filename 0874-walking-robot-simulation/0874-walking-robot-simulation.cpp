class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // A robot on an infinite XY-plane starts at point (0, 0) facing north. 
        // array of integers commands, which represents a sequence of moves that it needs to execute
        // -2 : Turn left 90 degrees.
        //-1 : Turn right 90 degrees.
        // 1<=k<=9: Move forward k units, one unit at a time.

        unordered_set<string> st;
        for(auto &obstacle:obstacles){
            string key= to_string(obstacle[0])+ '_' + to_string(obstacle[1]);
            st.insert(key);
        }

        int x=0;
        int y=0;
        int maxDistance=0;

        pair<int,int> dir={0,1};

        for(int i =0;i<commands.size();i++){
            if(commands[i]==-2){ // left
                dir={-dir.second, dir.first};
            }
            else if(commands[i]==-1){
                dir={dir.second,-dir.first};
            }
            else{
                for(int steps=0;steps<commands[i];steps++){
                    int newX=x+dir.first;
                    int newY=y+dir.second;

                    string newKey= to_string(newX)+ '_' + to_string(newY);

                    if(st.find(newKey)!=st.end()){
                        break;
                    }

                    x=newX;
                    y=newY;
                }
            }

            maxDistance=max(maxDistance, x*x+y*y);

            
        }

        return maxDistance;


        
    }
};