#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int Pi = 10000000;
    int n;
    cin >> n;  cin.ignore();
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  cin.ignore();
    }

    sort(arr.begin(), arr.end());

    if (arr.size() <= 1)
        cout << 0 << endl;
    else {
        int answer = Pi;
        for (size_t i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] < answer)
                answer = arr[i] - arr[i - 1];
        }
        cout << answer << endl;
    }
}