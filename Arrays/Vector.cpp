#include<iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int main(){
    // vector<int> arr;

    // vector<int> arr2(5,5);
    // for(int x: arr2)
    // cout << x << " ";

    // cout << "\n";

    // vector<int> arr3 = {2, 3, 4, 5};
    // for(int x : arr3)
    // cout << x << " ";

    vector<int> arr4 = {1 , 2, 3, 4, 5};
    arr4.push_back(6);

    arr4.insert(arr4.begin() + 1, 2);

    arr4.pop_back();
    arr4.erase(remove(arr4.begin(), arr4.end(), 2), arr4.end());
    for(int x : arr4)
    cout << x << " ";

    return 0;
}