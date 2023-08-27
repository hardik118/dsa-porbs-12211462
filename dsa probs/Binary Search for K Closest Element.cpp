#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target, k;
    cin >> target >> k;

    vector<pair<int, int>> diffAndValue;

    for (int i = 0; i < n; ++i) {
        int diff = abs(arr[i] - target);
        diffAndValue.push_back({diff, arr[i]});
    }

    sort(diffAndValue.begin(), diffAndValue.end());

    for (int i = 0; i < k; ++i) {
        cout << diffAndValue[i].second << " ";
    }

    return 0;
}

