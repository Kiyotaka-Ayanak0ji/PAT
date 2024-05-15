#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};

    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int i = 0;
    int j = 0;
    int res = 0;

    while(i < g.size() && j < s.size()){
        if(g[i] <= s[i]){
            res++;
            j++;
        }
        i++;
    }

    cout << res << endl;

    return 0;
}