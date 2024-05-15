#include <bits/stdc++.h>
using namespace std;

void printGraph(unordered_map<int,vector<pair<int,int>>> &graph){

    for(auto itr : graph){
        cout << itr.first << ": [";

        for(pair<int,int> it : itr.second){
            cout << "[" << it.first << " wt: " << it.second << "]"; 
        }

        cout << "]" << endl;
    }
}

// TC: O(VlogE) using heap.

vector<int> prims(unordered_map<int,vector<pair<int,int>>> &graph,int src){
    vector<int> dist(graph.size(),INT_MAX);
    vector<bool> visited(graph.size(),false);

    //Set source node dist = 0
    dist[src] = 0;

    //Min heap
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;

    //Push the start node
    pq.push({0,src});

    //While heap is not empty
    while(!pq.empty()){
        int node = pq.top().second;
        int w = pq.top().first;

        pq.pop();

        for(auto itr : graph[node]){
            int wt = itr.second;
            int nbr = itr.first;

            if(!visited[nbr] && wt < dist[nbr]){
                dist[nbr] = wt;
                pq.push({dist[nbr],nbr});
            } 
        }
        visited[node] = true;
    }

    return dist;
}

int main(){
    unordered_map<int,vector<pair<int,int>>> graph;

    graph[0].push_back({1,2});
    graph[0].push_back({2,1});
    graph[0].push_back({5,6});

    graph[1].push_back({2,3});
    graph[1].push_back({3,4});
    graph[1].push_back({4,3});
    graph[1].push_back({0,2});

    graph[2].push_back({4,2});
    graph[2].push_back({0,1});
    graph[2].push_back({1,3});

    graph[3].push_back({4,1});
    graph[3].push_back({1,4});

    graph[4].push_back({5,5});
    graph[4].push_back({2,2});

    graph[5].push_back({0,6});
    graph[5].push_back({4,5});


    printGraph(graph);
    vector<int> res = prims(graph,0);


    cout << "\nDISTANCE VECTOR\n" << endl;

    int i = 0;
    for(int itr : res){
        cout << i++ << ": " << itr << endl;
    }


}