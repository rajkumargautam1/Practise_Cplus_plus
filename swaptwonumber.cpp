#include<bits/stdc++.h>
using namespace std;
void myswap(int a,int b){
    int temp=a;
    cout<<"temp"<<temp<<endl;
    a=b;
    cout<<"a"<<a<<endl;
    b=temp;
    cout<<"b"<<b<<endl;
}

int main(){
    // int n;
    // cin>>n;

    int a=100;
    int b=150;
    cout<<a<<" "<<b<<endl;

    myswap(a,b);

    cout<<a<<" "<<b<<endl;

    return 0;

}
