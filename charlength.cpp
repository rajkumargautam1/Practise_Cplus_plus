#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[101];
    cin>>str;

    cout<<strlen(str)<<endl;

    int cnt=0;

    


    for(int i=0; str[i] !='\0'; i++){
        cnt++;
    }
    cout<<cnt;
}