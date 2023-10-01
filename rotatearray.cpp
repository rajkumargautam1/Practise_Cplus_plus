#include <iostream>
#include <algorithm> // Include the algorithm library for the reverse function
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;

    int temp = arr[n - 1];

    for (int i = n - 1; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    for (int i = 0; i < n; i++) { // Changed i <= n to i < n
        cout << arr[i] << " ";
    }

    return 0;
}
