#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int duplicate_size =1;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[duplicate_size]){
            arr[duplicate_size]=arr[i];
            duplicate_size++;
        }
    }


    cout<<duplicate_size<<endl;

    for(int i=0; i<duplicate_size; i++){
        cout<<arr[i]<<" ";
    }
}