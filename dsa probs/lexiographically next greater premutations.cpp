#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1,2,3,4}; // Change this array as needed
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original permutation: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    // Find the next lexicographically greater permutation
    if (std::next_permutation(arr, arr + n)) {
        std::cout << "\nNext lexicographically greater permutation: ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
    } else {
        std::cout << "\nNo greater permutation exists (last permutation)." << std::endl;
    }

    return 0;
}

