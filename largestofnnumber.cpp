#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;

 int lsf= INT_MIN;
 for(int i=0; i<n; i++){
    int data;
    cin>>data;
    
    if(data>lsf){
        lsf=data;
    }
 } 
 cout<<lsf<<endl;  


        

}