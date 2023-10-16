#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 

    int sum1=0;
    int sum2=0;

    for(int i=1; i<=n; i++){
        if(i%n == 0){
            sum1 +=i;
        }else{
            sum2 +=i;
        }

        
    }

    cout<<sum1<<endl;
    cout<<sum2<<endl;
}