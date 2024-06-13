#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    if(height.size() == 0){
        cout << 0 << endl;
        return 0;
    }

    int l = 0;
    int r = height.size()-1;

    int max_l = height[l];
    int max_r = height[r];

    int trap = 0;

    while(l < r){
        if(max_l < max_r){
            l++;
            max_l = max(max_l,height[l]);
            trap += (max_l - height[l]);
        }
        else{
            r--;
            max_r = max(max_r,height[r]);
            trap += (max_r - height[r]);
        }
    }

    cout << trap << endl;
}