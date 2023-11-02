#include <iostream>
using namespace std;

int countdigit(int num) {
    if (num == 0) {
        return 1; // 0 has one digit
    }

    int count = 0;
    while (num != 0) {
        num = num / 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    int sum = 0;
    int arr[50];
    int count = countdigit(num);

    // Storing individual digits in the array
    int temp = num;
    for (int i = count - 1; i >= 0; i--) {
        arr[i] = temp % 10;
        temp = temp / 10;
    }

    // Calculating the sum of combinations
    for (int i = count - 1; i >= 0; i--) {
        for (int j = count - 1; j >= 0; j--) {
            sum = sum + arr[i] + arr[j];
        }
    }

    cout << sum;

    return 0;
}

