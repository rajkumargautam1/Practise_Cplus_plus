#include <bits/stdc++.h>
using namespace std;
void copy(char *str1, char *str2){

int i=0; 
int j=0;

while (str2[j] !='\0')
{
    str1[i] =str2[j];
    i++;
    j++;
}

str1[i]='\0';


}
int main(){
    char str1[101];
    cin>>str1;

   char str2[101];
   cin>>str2;

   copy(str1, str2);

   cout<<str1 <<"   " <<str2<<endl;

}