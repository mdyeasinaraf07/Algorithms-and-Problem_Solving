#include <bits/stdc++.h>
using namespace std;

void get_capital(string s){
    if(s.size() <= 1){
        return;
    }
    if(s[0] >= 'A' && s[0] <= 'Z'){
        cout<< s[0];
        return;
    }
    get_capital(s.substr(1));

}

int main(){
    string s;
    cin>> s;
    get_capital(s);

    return 0;
}
