#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int h[n];

    for(int i=0; i<n; i++){
         cin>>h[i];
    }

   int l[n];
   l[0]=h[0];

   for(int i=1; i<n; i++){
     l[i]=max(l[i-1], h[i]);
   }

   int r[n];
   r[n-1] = h[n-1];
   for(int i=n-2; i>=0; i--){
     r[i]= max(r[i+1],h[i]);
   }

   int w=0; 
   for(int i=0; i<n; i++){
     int w_i=min(l[i], r[i])-h[i];
     w +=w_i;
   }

   cout<<w<<endl; 


    
}