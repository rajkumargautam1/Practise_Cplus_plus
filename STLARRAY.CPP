#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // nlogn

    sort(arr , arr+n);


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr, arr+n);

  

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<*min_element(arr, arr+n)<<"     " <<min_element(arr, arr+n)<<endl;

    cout<<endl;

    cout<<*max_element(arr, arr+n)<<"     " <<max_element(arr, arr+n)<<endl;

    int key=10;
    auto ptr = find(arr, arr+n, key);
    if(ptr != arr+n){
       cout<<key <<"found at index"<<(ptr-arr)<<endl;
    }else{
        cout<<key<<"key is not present"<<endl;
    }



    cout<<count(arr, arr+n,key)<<endl;



    binary_search(arr, arr+n, key)? cout<<key<<"is found"<<endl;
                                    cout<<key<<"is not found"<<endl;

    

    





}