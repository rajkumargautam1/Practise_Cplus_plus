#include<bits/stdc++.h>
using namespace std;
bool iseven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    

    bool ans;

	ans = iseven(n);

	// cout << ans << endl;

	ans ? cout << "true" << endl :
	      cout << "false" << endl;
}