#include <bits/stdc++.h>
using namespace std;

class DS{

    vector<int> parent;
    vector<int> rank;

    DS(int n){
        for(int i = 1 ; i<= n ;i++){
            parent.push_back(i);
            rank.push_back(0);
        }
    }
    

    int findParent(int x){
        if(parent[x] == x){
            return x;
        }
        return findParent(parent[x]);
    } 

    void union(int x,int y){
        int y_par = findParent(x);
        int x_par = findParent(y);

        if(x_par > y_par){
            parent[y_par] = x_par;
            rank[y_par]++;
        }

        if(y_par <= x_par){
            parent[x_par] = y_par;
            rank[x_par]++;
        }
    }
}
int main(){
    DS d_set = new DS(5);

    cout << d_set.findParent(1) << endl;

}