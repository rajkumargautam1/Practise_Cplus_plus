#include<bits/stdc++.h> Include the algorithm library for the reverse function
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;


    int fl= INT_MIN;
    int sl= INT_MIN; 
    int tl= INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > fl){
            tl=sl;
            sl=fl;
            fl=arr[i];
        }else if(arr[i] > sl){
            tl=sl;
            sl=arr[i];


        }else if(arr[i]>tl){
            tl=arr[i];
        }
    }

    cout<<fl <<" "<<sl<<" "<<tl<<" "<<endl;


    return 0;
}
