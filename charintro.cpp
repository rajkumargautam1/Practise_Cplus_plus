#include <bits/stdc++.h>
using namespace std;

void readstring(char str[]){
    char ch;
    int i=0;
    while(true){
        ch=cin.get();

        if(ch=='\n'){
            break;
        }

        str[i]=ch; 
        i++;

    }

    str[i]='\0';
}

int main(){
    
// char str[]= "coding block";
// cout<<str<<endl;

// char str1[6]="hell";
// cout<<str1<<endl;

// // read string


char str[100];

// cin>>str;

// readstring(str);


cin.getline(str, 100, '\n');

cout<<str<<endl; 


}