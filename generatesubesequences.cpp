#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<(1<<n); i++){
        cout<<i<<" :";
       for(int j=0; j<n; j++){
        if((i>>j)&1){
            cout<<arr[j]<<" ";
        }
       }
       cout<<endl;
    }

    return 0;

}
