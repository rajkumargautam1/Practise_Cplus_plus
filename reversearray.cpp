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

    // Reverse the array using the reverse function from the algorithm library
    reverse(arr, arr + n);

    for (int i = 0; i < n; i++) { // Changed i<=n to i<n
        cout << arr[i] << " "; // Removed endl to print elements on the same line
    }

    return 0; // Added return 0 to indicate successful completion
}
