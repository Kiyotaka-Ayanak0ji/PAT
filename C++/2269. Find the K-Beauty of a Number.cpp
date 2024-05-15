class Solution {
public:

    int divisorSubstrings(int num, int k) {

        int ops = 0;
        string s = to_string(num);

        for(int i = 0 ; i <= s.size()-k; i++){
            
            string sub = s.substr(i,k);
            int n = stoi(sub);

            if(n!=0 && num%n == 0){
                ops++;
            }

        }

        return ops;
    }
};