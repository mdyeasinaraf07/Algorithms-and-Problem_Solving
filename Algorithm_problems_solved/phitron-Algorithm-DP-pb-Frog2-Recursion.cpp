#include <bits/stdc++.h>
using namespace std;

int height[101];
int dp[101];
int INF = 2e9;
int n, k;

int stone(int n){
    if(n == 1){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = INF;
    for(int i = 1; i <= k; i++){
        int candidate_ans = stone(n - i) + abs(height[n] - height[n - i]);
        ans = min(ans, candidate_ans);
    }
    dp[n] = ans;
    return ans;
}



int main(){

    cin>> n >> k;
    for(int i = 1; i <= n; i++){
        cin>> height[i];
    }
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
    }
    stone(n);

    return 0;
}

