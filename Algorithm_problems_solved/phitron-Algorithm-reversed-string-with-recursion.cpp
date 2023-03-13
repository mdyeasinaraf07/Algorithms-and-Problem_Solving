#include <bits/stdc++.h>
using namespace std;

void recursive_reverse(string s){
    if(s.size() <= 1){
        cout<< s;
        return;
    }
    recursive_reverse(s.substr(1));
    cout<< s[0];

}

int main(){
    string s;
    cin>> s;
    recursive_reverse(s);


    return 0;
}
