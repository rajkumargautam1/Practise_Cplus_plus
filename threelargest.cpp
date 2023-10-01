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

    sort(arr, arr+n);

    for(int i=n-3; i<n; i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}
