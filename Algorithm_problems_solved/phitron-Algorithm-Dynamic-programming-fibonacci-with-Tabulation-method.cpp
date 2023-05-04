#include <bits/stdc++.h>
using namespace std;

long long int dp[102];

// fibonacci series: 1, 1, 2, 3, 5, 8, 13, 21, 34, ......

int main(){
    int n;
    cin>> n;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<< dp[n]<< endl;

    return 0;
}
