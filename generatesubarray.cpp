#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    

    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; j++){
            for(int k=i;
            
             k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }


    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;

}
