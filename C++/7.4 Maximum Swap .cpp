#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 8739;

    string s = to_string(num);

    int max_ind = 0;

    for(int i = 0 ; i < s.length() ;i++){
        if(s[max_ind] < s[i]){
            max_ind = i;
        }
    }

    int start = 0;

    for(int i = 0 ; i < s.length() ;i++){
        if(s[i] < s[max_ind]){
            start = i;
        }
    }

    char t = s[start];
    s[start] = s[max_ind];
    s[max_ind] = t;

    int res = stoi(s);

    cout << res << endl;
    
    return 0;
}