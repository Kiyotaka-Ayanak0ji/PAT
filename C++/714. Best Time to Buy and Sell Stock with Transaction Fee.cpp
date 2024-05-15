#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices = {7, 1, 5, 6, 4};

    int buy = prices[0], max_profit = 0;

    for(int i = 0 ; i < prices.size() ; i++){
        
        //Finding the minimum chat price...
        if(prices[i] < buy){
            buy = prices[i];
        }

        //Checking for a higher buy price..
        else if(prices[i] - buy > max_profit){
            max_profit = prices[i] - buy;
        }
    }


    cout << buy << " " << max_profit << endl;
}