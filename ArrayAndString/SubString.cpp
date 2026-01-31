#include<bits/stdc++.h>
using namespace std;

void substring(string &str, int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout << str[k];
            }
            cout << "\n";
        }
    }
}

int main(){

    string str;
    cin >> str;

    int n = str.length();

    substring(str, n);
    
    return 0;
}