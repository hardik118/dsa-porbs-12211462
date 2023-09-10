#include <iostream>
#include <cmath>
int findClosest(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    int closest = arr[left]; // Initialize closest to the first element

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Update closest if the current element is closer to the key
        if (abs(arr[mid] - key) < abs(closest - key)) {
            closest = arr[mid];
        }

        // If key is found, return it as the closest element
        if (arr[mid] == key) {
            return key;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return closest;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6; // Key for which to find the closest element
    int closest = findClosest(arr, size, key);

    std::cout << "The closest element to " << key << " is: " << closest << std::endl;

    return 0;
}

