 #include<bits/stdc++.h>
 using namespace std;
 bool isanagram(char *str1, char *str2){
    //build a frquency array for str1[]

    int freq1[101]={};
    for(int i=0; str1[i] !='\0'; i++){
        char ch =str1[i];
        int idx= ch-'a';
        freq1[idx]++;

    }
    int freq2[101]={};
    for(int i=0; str2[i]!='\0'; i++){
        freq2[str2[i]-'a']++;
    }


    for(int i=0; i<101; i++){
        if(freq1[i]!= freq2[i]){
            return false;
        }
    }

    // str1 and str2 are anagram

    return true;

 }  
 int main(){
    char str1[101];
    char str2[101];
    cin>>str1>>str2;

    isanagram(str1, str2)  ? cout<<"anagram"<<endl:
                             cout<<" not anagram"<<endl;
 }