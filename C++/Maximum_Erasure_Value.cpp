class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int max_sum = 0;
        int curr_sum = 0;
        int l= 0;

        unordered_set<int> seen;

        for(int num: nums){
            //element in set
            while(seen.find(num) != seen.end()){
                curr_sum -= nums[l];
                seen.erase(nums[l]);
                l++;
            }

            curr_sum += num;
            seen.insert(num);

            max_sum = max(max_sum,curr_sum);
        }

        return max_sum;
    }
};