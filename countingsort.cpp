#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k=3;

    int freq[100];  
    memset(freq, 0, sizeof(freq));

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    // for(int i=0; i<=k; i++){
    //   cout<<i<<" : "<<freq[i]<<endl;  
    // }


    // for(int i=0; i<=k; i++){
    //     int j= freq[i];

    //     for(int ii=0; ii<j; ii++){
    //         cout<<i<<" ";
    //     }
    // }


    



}