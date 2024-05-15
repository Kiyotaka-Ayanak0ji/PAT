#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a , pair<int,int> &b){
    return a.second > b.second;
};

int main(){
    vector<pair<int,int>> pairs = {{1, 2}, {2, 3}, {3, 4}};

    sort(pairs.begin(),pairs.end(),cmp);

    int chain = 0;

    for(int i = 0 ; i < pairs.size()-3 ;i+=2){
        if(pairs[i].second < pairs[i+1].first){
            chain++;
        }
    }

    cout << chain << endl;
}