#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    char inp[101];
    cin>>inp;

    char lsf[101];

    strcpy(lsf,inp);

    for(int i=2; i<=n; i++){
        cin>>inp;
        if(strcmp(inp, lsf)>0){
            strcpy(lsf,inp);
        }
    }
    cout<<lsf<<endl;

}