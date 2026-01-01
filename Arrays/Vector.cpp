#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;

    vector<int> arr2(5,5);
    for(int x: arr2)
    cout << x << " ";

    cout << "\n";

    vector<int> arr3 = {2, 3, 4, 5};
    for(int x : arr3)
    cout << x << " ";
}