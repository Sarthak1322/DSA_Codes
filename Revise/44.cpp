// Reverse an array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> reverseArray( vector<int>& arr) {
    vector<int> reversedArr = arr; 
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        swap(reversedArr[start], reversedArr[end]);
        start++;
        end--;
    }

    return reversedArr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> ans = reverseArray(arr);

    cout << "Reversed Array: ";
    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
