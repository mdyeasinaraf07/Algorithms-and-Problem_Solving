#include <bits/stdc++.h>
using namespace std;

long long int dp[101];

long long int tribonacci(int n){
    if(n <= 3){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    long long int ans = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    dp[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
    }
    long long int ans = tribonacci(n);
    cout<< ans<< endl;

    return 0;
}
