#include <bits/stdc++.h>
using namespace std;

int maximumsubarraysum(int arr[], int n)
{
    int x[100];

    x[0] = arr[0];

    int maxsum = x[0];
    for (int i = 1; i <= n - 1; i++)
    {
        x[i] = max(x[i - 1] + arr[i], arr[i]);
        maxsum = max(maxsum, x[i]);
    }

    return maxsum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << maximumsubarraysum(arr, n) << endl;
}