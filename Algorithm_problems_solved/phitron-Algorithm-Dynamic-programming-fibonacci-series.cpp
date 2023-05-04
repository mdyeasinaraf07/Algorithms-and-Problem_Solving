#include <bits/stdc++.h>
using namespace std;

int arr[102];

long long int fib(int n){
    if(n <= 2){
        return 1;
    }
    if(arr[n] > 0){
        return arr[n];
    }
    arr[n] = fib(n - 1) + fib(n - 2);
    return arr[n];
}

// fib series: 1, 1, 2, 3, 5, 8, 13, 21, 34, .......

int main(){
    int n;
    cin>> n;
    long long int ans = fib(n);
    cout<< ans<< endl;

    return 0;
}
