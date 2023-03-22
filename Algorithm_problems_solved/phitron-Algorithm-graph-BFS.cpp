#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited_array[N];
vector <int> adj_list[N];

void bfs(int src){
    queue <int> q;
    visited_array[src] = 1;
    q.push(src);
    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<< head<< "\n";
        for(int adj_node: adj_list[head]){
            if(visited_array[adj_node] == 0){
                visited_array[adj_node] = 1;
                q.push(adj_node);
            }
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
    bfs(src);

    return 0;
}
