#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
    if(n==0 or n==1){
        cout<<n<<endl;
    }
    else{
        int a=0;
        int b=1;
        for(int i=2; i<=n; i++){
            int c=a+b;
            a=b;
            b=c;
            
        }
        cout<<b<<endl;
        
    }


}