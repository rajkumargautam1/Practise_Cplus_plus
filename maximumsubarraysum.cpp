#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(int arr[], int n){
    int csum[101];
    csum[0]=0;

    for(int i=1; i<=n; i++){
        csum[i]=csum[i-1]+arr[i-1];
    }
    // for(int i=0; i<=n; i++){
    //     cout<<csum[i]<<" ";
    // }
    // cout<<endl; 

    int maxsum=INT_MIN;
    int start,end;

    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; j++){
            int sum =csum[j+1]-csum[i];
            // maxsum= max(maxsum,sum);

            if(sum>maxsum){
                maxsum=sum;
                start=i;
                end=j;
            }

        }
    }
    return 0;
}


int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }

    cout<<maxsubarraysum(arr,n)<<endl;

  




}