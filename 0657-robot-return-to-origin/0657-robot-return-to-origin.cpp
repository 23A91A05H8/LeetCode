class Solution {
public:
    bool judgeCircle(string moves) {
        int a = 0;
        int b = 0;
        for(char ch : moves){
            if(ch == 'U'){
                a++;
            }
            if(ch == 'D'){
                a--;
            }
            if(ch == 'L'){
                b++;
            }
            if(ch == 'R'){
                b--;
            }
        }
        if(a==0 && b==0){
            return true;
        }
        else
        {
            return false;
        }
    }
};