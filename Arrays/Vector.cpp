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

    vector<int> arr3 = {2, 3, 4, 5};
    // for(int x : arr3)
    // cout << x << " ";

    vector<int> arr4 = {1 , 2, 3, 4, 5};
    arr4.push_back(6);

    // arr4.insert(arr4.begin() + 1, 2);
    auto it = arr4.emplace ( arr4.begin()+1, 100 );
    arr4.emplace ( it, 200 );
    arr4.emplace_back(500);


    arr4.pop_back();
    arr4.erase(remove(arr4.begin(), arr4.end(), 2), arr4.end());
    // cout << arr4.at(2) << "\n";
    arr3.swap(arr4);
    for(int x : arr4)
    cout << x << " ";

    return 0;
}