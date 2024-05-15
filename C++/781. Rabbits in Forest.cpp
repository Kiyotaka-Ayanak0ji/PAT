class Solution {
public:
    int numRabbits(vector<int>& answers) {

        unordered_map<int,int> Hash;

        int counter = 0;

        for(int ans : answers){
            if(ans == 0){
                //only one rabbit of this color..
                counter++;
            }
            else if(!Hash[ans] || Hash[ans] == 0){
                //First time..
                Hash[ans] = 1;

                //Add all rabbits with the same color...
                counter += ans + 1;
            }
            else{
                //Add one for how many times that rabbit occured..
                Hash[ans]++;
                if(Hash[ans] > ans){
                    //set to 0
                    Hash[ans] = 0;
                }
            }
        }

        return counter;
    }
};