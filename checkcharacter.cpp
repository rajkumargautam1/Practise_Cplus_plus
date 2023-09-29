#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;

cout<<"enter the charcter"<<endl;
cin>>ch;

if(ch>='A' and ch<='Z'){
    cout<<ch<<"is an upper case"<<endl;
}else if(ch>='a' and ch<='z'){
    cout<<ch<<" is an lower case letter"<<endl;
}else if(ch>='0' and ch>='9'){
    cout<<ch<<" is digit"<<endl;
}else {
    cout<<ch<<" is a special character"<<endl;
}
return 0;


    
}