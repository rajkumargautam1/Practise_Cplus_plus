#include<bits/stdc++.h> 
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
    int fs= INT_MAX;
    int ss= INT_MAX;

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
        }if(arr[i]<fs){
            ss=fs;
            fs=arr[i];
        }else if(arr[i]<ss){
            ss=arr[i];
        }
    }

    int p1=fl*sl*tl;
    int p2=fl*fs*ss;

    cout<<max(p1,p2)<<endl;

    // cout<<fl <<" "<<sl<<" "<<tl<<" "<<endl;


    return 0;
}
