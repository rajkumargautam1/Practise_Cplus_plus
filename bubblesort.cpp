#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;


    for(int i=0; i<n-1; i++){
        bool flag =true;

        for(int j=0; j<n-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);

                flag =false;
            }
        }
        if(flag){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
