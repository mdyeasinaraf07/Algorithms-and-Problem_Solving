#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector <int> adj_list[N];
int visited[N];
int colour[N];

bool is_bipartite(int src){
    visited[src] = 1;
    for(int adj_node: adj_list[src]){
        if(visited[adj_node] == 0){
            //use different colour to adj_node;
            if(colour[src] == 1){
                colour[adj_node] = 2;
            }
            else{
                colour[adj_node] = 1;
            }
            bool bipartite = is_bipartite(adj_node);
            if(!bipartite){
                return false;
            }
        }
        else{
            if(colour[src] == colour[adj_node]){
                return false;
            }
        }
    }
    return true;

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
    bool graph = true;
    for(int i = 0; i < nodes; i++){
        if(visited[i] == 0){
            colour[i] = 1;
            bool x = is_bipartite(i);
            if(!x){
                graph = false;
                break;
            }
        }
    }
    if(graph){
        cout<< "YES\n";
    }
    else{
        cout<< "NO\n";
    }

    return 0;
}
