#include<iostream>
using namespace std;

void findMostFrequent(int arr[], int size) {
    int mostFrequentElement = arr[0];
    int maxCount = 1;

    for (int i = 0; i < size; i++) {
        int currentElement = arr[i];
        int currentCount = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] == currentElement) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentElement = currentElement;
        }
    }

    cout << "The most frequent element is: " << mostFrequentElement << endl;
}

int main() {
    int arr[] = {1, 1, 1, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMostFrequent(arr, size);

    return 0;
}

