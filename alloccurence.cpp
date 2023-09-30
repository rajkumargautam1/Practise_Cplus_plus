#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;


    int t;
    cin>>t;

    cout<<endl;

    bool flag=false;

    for(int i=0; i<=n; i++){
        if(arr[i]==t){
            cout<<i<<endl;
            
            flag=true;
        }
    }

        
        if(!flag){
         cout<<"-1"<<endl;
    
        }
}
