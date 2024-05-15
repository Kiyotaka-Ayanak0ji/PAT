#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
#define ci pair<int,char>
using namespace std;

int main(){

    unordered_map<char,vector<ci>> graph;
//     {
//     "A": [(1,"B"), (3, "E")],
//     "B": [(1, "A"), (4, "C"), (1, "D"), (2, "E")],
//     "C": [(4, "B"), (1, "D")],
//     "D": [(1, "B"), (1, "C"), (2, "E")],
//     "E": [(3, "A"), (2, "B"), (2, "D")]
// }

    graph['A'].push_back({1,'B'});
    graph['A'].push_back({3,'E'});


    graph['B'].push_back({1,'A'});
    graph['B'].push_back({4,'C'});
    graph['B'].push_back({1,'D'});
    graph['B'].push_back({2,'E'});


    graph['C'].push_back({4,'B'});
    graph['C'].push_back({1,'D'});

    graph['E'].push_back({3,'A'});
    graph['E'].push_back({2,'B'});
    graph['E'].push_back({2,'D'});


    for(auto itr :graph['A']){
        cout << itr.first << " ";
    }
}