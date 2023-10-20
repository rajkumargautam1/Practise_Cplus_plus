#include <bits/stdc++.h>
using namespace std;

void reversestring(char* str){
    int i=0;
    int j=strlen(str)-1;

    while(i<j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main(){
    char str[101];
    cin>>str;
    


// /   reverse(str, str+strlen(str));



    reversestring(str);

   cout<<str<<endl;

   

}