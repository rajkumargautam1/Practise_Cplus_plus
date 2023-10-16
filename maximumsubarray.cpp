#include<bits/stdc++.h>
using namespace std;

int maximumsubarray(int arr[], int n){
    // .
    int maxsum=INT_MIN;
    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; i++){

            int sum=0;

            for(int k=i ; k<=j; k++){
                sum+=arr[k];
            }

            // ..

            // maxsum= max(maxsum,sum);

            if(sum>maxsum){
                maxsum = sum;    
            }

        }
    }

    return maxsum;

}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<maximumsubarray(arr, n)<<endl;




}