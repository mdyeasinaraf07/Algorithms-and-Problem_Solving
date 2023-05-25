#include <bits/stdc++.h>
using namespace std;

const int N = 101;
int maze[N][N];
int visited[N][N];
int level[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int n, m;


bool is_inside(pair <int, int> node){
    int x = node.first;
    int y = node.second;
    if(x >= 0 && x < n && y >= 0 && y < m){
        return true;
    }
    return false;
}

bool not_wall(pair <int, int> node){
    int x = node.first;
    int y = node.second;
    if(maze[x][y] == -1){
        return false;
    }
    return true;
}

void bfs(pair <int, int> src){
    queue < pair <int, int> > q;
    visited[src.first][src.second] = 1;
    q.push(src);
    level[src.first][src.second] = 0;

    while(!q.empty()){
        pair <int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for(int i = 0; i < 4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair <int, int> adj_node = {new_x, new_y};
            if(is_inside(adj_node) && not_wall(adj_node) && visited[new_x][new_y] == 0){
                    visited[new_x][new_y] = 1;
                    level[new_x][new_y] = level[x][y] + 1;
                    q.push(adj_node);
            }
        }
    }
}

int main(){

    cin>> n >> m;
    pair <int, int> src, last;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin>> c;
            if(c == '#'){
                maze[i][j] = -1;
            }
            else if(c == 'A'){
                src = {i, j};
            }
            else if(c == 'B'){
                last = {i, j};
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            level[i][j] = -1;
        }
    }

    bfs(src);
    if(level[last.first][last.second] != -1){
        cout<< "YES\n" << level[last.first][last.second]<< endl;
    }
    else{
        cout<< "NO\n";
    }
    return 0;
}

/*

    5 8

    ########
    #.A#...#
    #.##.#B#
    #......#
    ########



*/
