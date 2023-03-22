#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector <int> adj_list[N];
int visited[N];

void bfs(int src, int connect){
    queue <int> q;
    visited[src] = 1;
    q.push(src);
    while(!q.empty()){
        for(int adj_node: adj_list[src]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
            }
            if(adj_node == connect){
                cout<< "YES\n";
                return;
            }

        }
        q.pop();
    }
    cout<< "NO\n";
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
    int src = 2;
    int connect = 6;
    bfs(src, connect);


    return 0;
}

//nodes = 9, edges = 11;

//0 2
//7 8
//0 4
//0 5
//6 7
//1 4
//1 5
//2 3
//2 6
//4 5
//8 6
