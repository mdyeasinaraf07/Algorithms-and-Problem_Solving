#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector <int> adj_list[N];
int visited[N];

bool dfs(int src){
    visited[src] = 1;
    for(int adj_node: adj_list[src]){
        if(visited[adj_node] == 0){
            bool cycle = dfs(adj_node);
            if(cycle){
                return true;
            }
        }
        else if(visited[adj_node] == 1){
            return true;
        }
    }
    visited[src] = 2;
    return false;
}


int main(){
    int nodes, edges;
    cin>> nodes >> edges;
    for(int i = 0; i < edges; i++){
        int u, v;
        cin>> u >> v;
        adj_list[u].push_back(v);
    }
    bool get_cycle = false;
    for(int i = 0; i < nodes; i++){
        if(visited[i] == 0){
            get_cycle = dfs(i);
            if(get_cycle){
                break;
            }
        }
    }
    if(get_cycle){
        cout<< "YES\n";
    }
    else{
        cout<< "NO\n";
    }

    return 0;
}
