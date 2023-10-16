#include <bits/stdc++.h>
using namespace std;

void modify(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i]++;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;

    modify(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}