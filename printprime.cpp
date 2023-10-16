#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printprime(int n) {
    int cnt = 0;
    int num = 2; // Changed from "int n = 2" to avoid conflict with the function parameter

    while (cnt < n) {
        if (isprime(num)) {
            cout << num << " ";
            cnt++;
        }
        num++;
    }
}

int main() {
    int n;
    cin >> n;

    printprime(n);

    return 0;
}
