class Solution {
public:
    string reorganizeString(string s) {

        //Using hash + priority queue

        unordered_map<char,int> mp;
        
        for(char ch : s){
            mp[ch]++;
        }
        
        priority_queue<pair<int,char>> pq;

        for(auto itr : mp){
            pq.push({itr.second,itr.first});
        }

        string ans = "";

        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();

            //Empty string or last and first char are same..
            if(ans.empty() || x.second != ans.back()){
                ans += x.second;

                if(--x.first > 0){
                    pq.push(x);
                }
            }
            else{
                if(pq.empty()){
                    return "";
                }
                auto y = pq.top();
                pq.pop();

                ans += y.second;
                if(--y.first > 0){
                    pq.push(y);
                }

                pq.push(x);
            }
        }
        return ans;
    }
};