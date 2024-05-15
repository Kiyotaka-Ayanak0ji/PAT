class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l = 0;
        int r = height.size()-1;
        int water = 0;
        int curr_water = 0;

        while(l < r){
            curr_water = min(height[l],height[r])*(r-l);
            water =  max(water,curr_water);
            
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return water;
    }
};