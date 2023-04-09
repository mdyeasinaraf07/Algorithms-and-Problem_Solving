#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector <int> adj_list[N];
bool dfs(int src){
    visited[src] = 1;
    for(int adj_node: adj_list[src]){
        if(visited[adj_node] == 0){
            if(dfs(adj_node)){
                return true;
            }
        }
        else if(visited[adj_node] == 1){
            return true;
        }
    }
    return false;
}
int main(){
    int n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adj_list[u].push_back(v);
    }
    bool got_cycle = false;
    for (int i = 1; i <= n ; i++){
        if(visited[i] == 0) {
            got_cycle =  dfs(i);
            if(got_cycle){
                break;
            }
        }
    }
    if(got_cycle){
        cout << "Cycle Exists\n";
    }
    else{
        cout << "No Cycle\n";
    }
}


