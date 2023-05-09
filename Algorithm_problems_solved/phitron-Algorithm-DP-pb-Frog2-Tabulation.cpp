#include <bits/stdc++.h>
using namespace std;

int height[101];
int dp[101];
int INF = 2e9;

int main(){
    int n, k;
    cin>> n >> k;
    for(int i = 1; i <= n; i++){
        cin>> height[i];
    }
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        dp[i] = INF;
        for(int j = 1; j <= k; j++){
            if(i - j <= 0){
                break;
            }
            int candidate_ans = dp[i - j] + abs(height[i] - height[i - j]);
            dp[i] = min(dp[i], candidate_ans);
        }
    }
    cout<< dp[n]<< endl;

    return 0;
}
