#include <bits/stdc++.h>
using namespace std;

int sum_of_array(vector <int> v, int n){
    if(n == 0){
        return v[n];
    }
    int ans = v[n] + sum_of_array(v, n - 1);

}

int main(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int ans = sum_of_array(v, n);
    cout<< ans<< "\n";


    return 0;
}
