#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int t;
    cin>>t;

    int s=0;
    int e=n-1;

    while(s<=e){
        int m=s+((s+e)/2);
        if(arr[m] == t){
            cout<<t<<"found at index"<<m<<endl;
            break;
        }else if(t>arr[m]){
            s=m+1;
        }else{
            e=m-1;
        }
    }
    if(s>e){
        cout<<t<<"not found"<<endl;
    }

}