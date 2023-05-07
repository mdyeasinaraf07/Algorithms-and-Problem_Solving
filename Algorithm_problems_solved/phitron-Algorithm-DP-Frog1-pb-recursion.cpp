#include <bits/stdc++.h>
using namespace std;

int height[101];
int dp[101];

int stone(int n){
    if(n == 1){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int ans1 = stone(n - 1) + abs(height[n] - height[n - 1]);
    if(n == 2){
        dp[n] = ans1;
        return ans1;
    }
    int ans2 = stone(n - 2) + abs(height[n] - height[n - 2]);
    int ans = min(ans1, ans2);
    dp[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++){
        int h;
        cin>> h;
        height[i] = h;
    }
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
    }
    cout<< stone(n)<< endl;



    return 0;
}
