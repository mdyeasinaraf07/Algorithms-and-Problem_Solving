#include <bits/stdc++.h>
using namespace std;

int height[101];
int dp[101];

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++){
        int h;
        cin>> h;
        height[i] = h;
    }
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        int ans1 = dp[i - 1] + abs(height[i] - height[i - 1]);
        if(i == 2){
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i - 2] + abs(height[i] - height[i - 2]);
        int ans = min(ans1, ans2);
        dp[i] = ans;
    }
    cout<< dp[n]<< endl;

    return 0;
}
