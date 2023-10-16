#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int h[n];

    for(int i=0; i<n; i++){
         cin>>h[i];
    }

    int w=0;
    for(int i=0; i<n; i++){
        
        int l_i =h[i];
        for(int j=i-1; j>=0; j--){
            l_i=max(l_i,h[j]);
        }

        int r_i=h[i];
        for(int j=i+1; j<n; j++){
            r_i= max(r_i,h[j]);
        }

        int  w_i= min(l_i, r_i)-h[i];

        w+=w_i;
    }

    cout<<w<<endl;


}