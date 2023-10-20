#include<iostream>
#include<cstring>
using namespace std;

void concatstring(char* str1, char* str2){
    int i=strlen(str1);

    int j=0;
    while(str2[j] !='\0'){
        str1[i]= str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}




int main(){
    char str1[100];
    cin>>str1;

    char str2[101];
    cin>>str2;

    concatstring(str1, str2);


    cout<<str1<<endl;


    strcat(str1, str2);






}