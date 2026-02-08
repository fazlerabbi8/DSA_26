#include<bits/stdc++.h>
using namespace std;

int findMinIndex(vector<int>& arr){
    int low = 0;
    int high = arr.size() - 1;

    int minIndex = -1;

    while(low <= high){
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        if(arr[mid1] == arr[mid2]){
            low = mid1 + 1;
            high = mid2 - 1;

            minIndex = mid1;
        }

        else if(arr[mid1] < arr[mid2]){
            high = mid2 - 1;
            minIndex = mid1;
        }

        else{
            low = mid1 + 1;
            minIndex = mid2;
        }
    }
    return 0;
}

int main(){
    vector<int> arr = {10, 8, 4, 2, 5, 9, 11};
    int index = findMinIndex(arr);

    cout << index << "\n";
    
    return 0;
}