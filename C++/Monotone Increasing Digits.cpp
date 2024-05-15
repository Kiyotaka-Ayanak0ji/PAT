class Solution {
public:
    int monotoneIncreasingDigits(int n) {

        //Logic:
        /*
            Start from the last of the index and then
            check if the s[i] < s[i-1], we then try to 
            make max digits as 9 , then we convert the last digit 
            as s[i]-1..
        */

        if(n < 10){
            return n;
        }
        string s = to_string(n);
        int idx = n;

        for(int i = s.length()-1 ; i > 0 ; i--){
            
            if(s[i] < s[i-1]){
                //Taking the last index....
                idx = i;
                s[i-1] = s[i-1]-1;
            }
        }
        for(int i = idx ; i < s.length() ; i++){
            s[i] = '9';
        }
        return stoi(s);
    }
};