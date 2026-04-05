class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal=0;
        int vertical=0;

        for(char &move:moves){
            if(move=='U') vertical++;
            else if(move=='D') vertical--;
            else if(move=='R') horizontal++;
            else horizontal--;
        }

        if(horizontal==0 && vertical==0){
            return true;
        }

        return false;
    }
};