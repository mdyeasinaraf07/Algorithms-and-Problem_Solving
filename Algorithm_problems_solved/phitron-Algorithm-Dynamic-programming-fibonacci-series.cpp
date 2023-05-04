#include <bits/stdc++.h>
using namespace std;

long long int dp[102];

long long int fib(int n){
    if(n <= 2){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    long long int ans = fib(n - 1) + fib(n - 2);
    dp[n] = ans;
    return ans;
}

// fib series: 1, 1, 2, 3, 5, 8, 13, 21, 34, .......

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
    }
    long long int ans = fib(n);
    cout<< ans<< endl;

    return 0;
}
