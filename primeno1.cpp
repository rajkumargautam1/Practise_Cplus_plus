#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            return false;

        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    if (isprime(n)){
        cout<<n<<" is prime"<<endl;

    }else{
        cout<<n<<" is not a prime number"<<endl;
    }
}