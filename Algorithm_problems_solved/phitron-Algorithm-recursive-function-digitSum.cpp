#include <bits/stdc++.h>
using namespace std;

int recursive_fun_digitSum(int n){
    if(n == 0){
        return n;
    }
    int sum = 0;
    return recursive_fun_digitSum(n / 10) + (sum += n % 10);

}

int main(){
    int n;
    cin>> n;
    int sum = recursive_fun_digitSum(n);
    cout<< sum<< "\n";


    return 0;
}
