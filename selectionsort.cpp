#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){

        int correct_pos=i;
        int min_idx=i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[correct_pos] , arr[min_idx]);

    }  
    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }

}