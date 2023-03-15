#include <bits/stdc++.h>
using namespace std;

int fibonacci_of_n(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int num1 = fibonacci_of_n(n - 1);
    int num2 = fibonacci_of_n(n - 2);
    return num1 + num2;
}

int main(){
    int n;
    cin>> n;
    int ans = fibonacci_of_n(n);
    cout<< ans<< "\n";

    return 0;
}
