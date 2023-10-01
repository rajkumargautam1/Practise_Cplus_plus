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

    int k;
    cin>>k;

    // for(int j=0; j<=k; j++){
    // int temp = arr[n - 1];

    // for (int i = n - 1; i >= 1; i--) {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = temp;


    // }

    k %=n;


    // reverse the entire arrays

    int i=0;
    int j=n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // reverse the first kth element 

    i=0; 
    j=k-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // reverse the last kth element 

    i=k; 
    j=n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }





    for (int i = 0; i < n; i++) { // Changed i <= n to i < n
        cout << arr[i] << " ";
    }

    return 0;
}
