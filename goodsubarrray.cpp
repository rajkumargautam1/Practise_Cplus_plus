#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;   

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        } 

        int csum[n+1];
        csum[0]=0;

        for(int i=0; i<n; i++){
            csum[i]= csum[i-1]+arr[i-1];
        }

        int count=0; 

        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                int sum=csum[j+1]-csum[i];
                if(sum%n == 0){
                    count++;
                }
            }
        }

        cout<<count<<endl;


    
}