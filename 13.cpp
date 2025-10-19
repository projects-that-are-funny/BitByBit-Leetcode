class Solution {
public:
    int getval(char symbol){
        if(symbol=='I')
            return 1;
        else if(symbol=='V')
            return 5;
        else if(symbol=='X')
            return 10;
        else if(symbol=='L')
            return 50;
        else if(symbol=='C')
            return 100;
        else if(symbol=='D')
            return 500;
        else if(symbol=='M')
            return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int val=0;
        char prev='Q';
        for(int i=s.size()-1;i>=0;i--){
            if(getval(prev)>getval(s[i])){
                val-=getval(s[i]);
            }else{
                val+=getval(s[i]);
            }
            prev=s[i];
        }
        return val;
    }
};
