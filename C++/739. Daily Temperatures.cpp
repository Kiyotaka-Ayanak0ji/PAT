class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {

        stack<int> stk;

        vector<int> res(arr.size(),0);

        for(int i = 0 ; i < arr.size(); i++){

            while(!stk.empty() && arr[i] > arr[stk.top()]){
                res[stk.top()] = i-stk.top();
                stk.pop();
            }
            stk.push(i);
        }

        return res;
    }
};