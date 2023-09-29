#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;

 double sq=sqrt(n);
 int i=2;

 while(i<=sq){
    if(n%i==0){
        //  n is not prime number

        cout<<n<<" is not prime  "<<endl;
        break;

    }
    i++;

 }
 if(i>sq){
    cout<<n<<" is  prime"<<endl;
 }
  return 0;  
}