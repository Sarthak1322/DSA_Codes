// search in rotated sorted array
#include <iostream>
#include <vector>

using namespace std;

int searchInRotatedArray(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            return mid; // Target found
        }

        // Check which part of the array is sorted
        if (nums[start] <= nums[mid]) { // Left part is sorted
            if (nums[start] <= target && target < nums[mid]) {
                end = mid - 1; // Target lies in the left sorted part
            } else {
                start = mid + 1; // Target lies in the right part
            }
        } else { // Right part is sorted
            if (nums[mid] < target && target <= nums[end]) {
                start = mid + 1; // Target lies in the right sorted part
            } else {
                end = mid - 1; // Target lies in the left part
            }
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> rotatedArray = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = searchInRotatedArray(rotatedArray, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
