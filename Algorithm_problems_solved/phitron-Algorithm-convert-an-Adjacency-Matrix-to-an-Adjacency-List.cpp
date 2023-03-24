#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector <int> adj_list[N];

int main(){
    int nodes;
    cin>> nodes;
    int adj_matrix[nodes][nodes];

    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            int x;
            cin>> x;
            if(x == 1){
                adj_list[i].push_back(j);
            }
        }
    }
    for(int i = 0; i < nodes; i++){
            cout<< i<< ": ";
        for(int adj_node: adj_list[i]){
            cout<< adj_node<< " ";
        }
        cout<< endl;
    }

    return 0;
}
