#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];



    for (int i = 0; i <n; i++)
    {
      cin>>arr[i];
    }


    int inv[100];


    for (int i = 0; i <n; i++)
    {
       cout<<i<<" : "<<arr[i]<<endl;
        inv[arr[i]]=i;
    }

    cout<<endl;
 
    for (int i=0; i<n; i++)
    {
    cout<<i<<" : "<<inv[i]<<endl;
    
    }


    
}