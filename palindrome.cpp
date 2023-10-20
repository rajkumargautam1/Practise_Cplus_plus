#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(char* str){
    int i=0; 
    int j=strlen(str)-1;

    while(i<j){
        if(str[i] !=str[j]){
            return false;
        
        }
        i++;
        j--;
    }
    return true;

}
int main(){
    char str[101];
    cin>>str;

    ispalindrome(str) ? cout<<str<<" is palindrome"<<endl :
                        cout<<str<<" is not a palindrome"<<endl;




}