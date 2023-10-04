#include<bits/stdc++.h>
using namespace std;

void increment(int & n){
    cout<<"inside the function before increment"<<n<<endl;
    n++;
    cout<<"inside the function after increment"<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    cout<<"inside main:"<<n<<endl;

    increment(n);

    cout<<"insidet main after the increment"<<n<<endl;


    return 0;

}
