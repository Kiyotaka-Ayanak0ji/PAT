class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        //Using optimized approach..
        int freq[26] = {0};

        for(char ch : tasks){
            freq[ch-'A']++;
        }

        sort(begin(freq),end(freq));

        //Considering last two elements for comparision
        int chunk = freq[25]-1;
        int idle = chunk * n;

        for(int i = 24 ; i >= 0 ; i--){
            idle -= min(chunk,freq[i]);
        }

        return idle < 0 ? tasks.size(): tasks.size() + idle;
    }
};