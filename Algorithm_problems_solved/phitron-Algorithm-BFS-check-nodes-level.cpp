#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector <int> adj_list[N];
int visited[N];
int level[N];

void bfs(int src){
    visited[src] = 1;
    queue <int> q;
    q.push(src);
    level[src] = 0;
    while(!q.empty()){
        int head = q.front();
        q.pop();
        for(int adj_node: adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
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
    for(int i = 1; i <= nodes; i++){
        cout<< "node: "<< i<< " "<< "level: "<< level[i]<< "\n";
    }

    return 0;
}


// nodes = 5, edges = 6
//1 2
//1 3
//2 4
//3 4
//3 5
//4 5
//source node = 1

