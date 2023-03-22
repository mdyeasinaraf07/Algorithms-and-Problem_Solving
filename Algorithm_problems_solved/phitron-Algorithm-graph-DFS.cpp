#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector <int> adj_list[N];
int visited_arr[N];

void dfs(int src){
    visited_arr[src] = 1;
    cout<< src<< "\n";
    for(int adj_node: adj_list[src]){
        if(visited_arr[adj_node] == 0){
            dfs(adj_node);
        }
    }
}

int main(){
    int nodes, edges;
    cin>> nodes >> edges;
    for(int i = 0; i < edges; i++){
        int u, v;
        cin>> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src;
    cin>> src;
    dfs(src);

    return 0;
}
