class Solution {
public:

int calculateWaviness(int number){

    string num= to_string(number);
    int waviness=0;

    if(num.length()<3){
        return 0;
    }

    // 120

    for(int i=1;i<num.length()-1;i++){
         if(num[i] > num[i+1] && num[i] > num[i-1]){
                waviness++;
            }

            else if(num[i] < num[i+1] && num[i] < num[i-1]){
                waviness++;
            }

    }

    return waviness;

}
    int totalWaviness(int num1, int num2) {
        // 
        int waviness=0;

        for(int i=num1;i<=num2;i++){
            waviness+=calculateWaviness(i);
        }

        return waviness;
        
    }
};