#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;

    int count=0;

    for(int k=0; k<=31; k++){
        if((n>>k)&1){
            count++;
        }
       
    }
    cout<<count<<endl;
    
}