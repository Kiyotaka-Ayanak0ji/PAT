class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(n == 1){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int sum = INT_MAX;

        for(int i=0;i<=n-k;i++){
            int min=nums[i+k-1]-nums[i];
            if(min<sum){
                sum=min;
            }
        }
        return sum;
    }
};