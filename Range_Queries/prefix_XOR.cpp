#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> arr(n), prefixArr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    prefixArr[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefixArr[i] = prefixArr[i - 1] ^ arr[i];
    }

    cout << "Prefix array: " << "\n";

    for(auto& x : prefixArr){
        cout << prefixArr[x] << " " << "\n";
    }
    return 0;
}