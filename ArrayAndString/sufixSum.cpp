#include<bits/stdc++.h>
using namespace std;

vector<int> createSuffixSumArray(vector<int> arr, int n){
    vector<int> suffixSum(n , 0);

    suffixSum[n - 1] = arr[n - 1];

    for(int i = n - 2; i >= 0; i--){
        suffixSum[i] = suffixSum[i + 1] + arr[i];
    }

    return suffixSum;
}

int main(){

    vector<int> arr = {10, 15, 70, 82, 30, 40};
    int n = arr.size();

    vector<int> suffixSum = createSuffixSumArray(arr, n);
    
    return 0;
}