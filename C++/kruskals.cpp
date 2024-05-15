#include <bits/stdc++.h>
using namespace std;

void printGraph(unordered_map<int,vector<pair<int,int>>> &graph){

    for(auto itr : graph){
        cout << itr.first << ": [";

        for(pair<int,int> it : itr.second){
            cout << "[" << "wt: " << it.second << " ->" << it.first << "]"; 
        }

        cout << "]" << endl;
    }
}

//Union by size
class Disjoint_Set{
    vector<int> parent;
    vector<int> size;

    public:
        Disjoint_Set(int n){
            for(int i = 0 ; i < n ;i++){
                parent.push_back(i);
                size.push_back(1);
            } 
        }

        int find(int x){
            if(parent[x] == x){
                return x;
            }

            return find(parent[x]);
        }

        void union_by_size(int x,int y){

            //Find the ultimate parent..
            int u_x = find(x);
            int u_y = find(y);

            if(u_x < u_y){
                parent[u_x] = u_y;
                size[u_y] += size[u_x]; 
            }
            else{
                parent[u_y] = u_x;
                size[u_x] += size[u_y];
            }
        }
};

void kruskals(unordered_map<int,vector<pair<int,int>>> &graph,int src){
    
    for(int i = 0 ; i < graph.size() ; i++){
        sort(graph[i].begin(),graph[i].end());
    }
    
    cout << "SORTED" << endl;
    printGraph(graph);
    cout << "\n\n" << endl;

    Disjoint_Set ds(graph.size());

    unordered_map<int,pair<int,int>> res;

    for(auto itr : graph[src]){
        int node = itr.first;
        int wt = itr.second;

        if(ds.find(src) != ds.find(node)){
            ds.union_by_size(src,node);

            res[src] = {node,wt};
        }
    }

    for(auto itr : res){
        cout << itr.first << "->" << itr.second.first << " wt:" << itr.second.second << endl;
    }
}

int main(){

    unordered_map<int,vector<pair<int,int>>> graph;

    graph[0].push_back({2,1});
    graph[0].push_back({1,2});
    graph[0].push_back({6,5});

    graph[1].push_back({3,2});
    graph[1].push_back({4,3});
    graph[1].push_back({3,4});
    graph[1].push_back({2,0});

    graph[2].push_back({2,4});
    graph[2].push_back({1,0});
    graph[2].push_back({3,1});

    graph[3].push_back({1,4});
    graph[3].push_back({4,1});

    graph[4].push_back({5,5});
    graph[4].push_back({2,2});

    graph[5].push_back({6,0});
    graph[5].push_back({5,4});

    kruskals(graph,0);
}
