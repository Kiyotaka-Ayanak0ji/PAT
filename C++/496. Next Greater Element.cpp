class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        stack<int> stk;

        for(int i = nums2.size() - 1 ; i >= 0 ; i--){
            while(!stk.empty() && nums2[stk.top()] <= nums2[i]){
                stk.pop();
            }
            if(!stk.empty()){
                mp[nums2[i]] = nums2[stk.top()];
            }
            else{
                mp[nums2[i]] =- 1;
            }
            stk.push(i);
        }
        for(auto &x : nums1){
            x = mp[x];
        }
        return nums1;      
    }
};