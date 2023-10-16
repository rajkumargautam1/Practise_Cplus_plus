#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int answer[100];

    for (int i = 0; i < n; i++)
    {
        // compute answer[i] =li*ri;

        // li it is the producgt of al the elemts  in nums in the range 0 to i-1;
        int li = 1;
        for (int j = 0; j <= i - 1; j++)
        {
            li *= arr[j];
        }

        // ri : it is the product of all the elements in nums in the range i+1 to n-1
        int ri = 1;
        for (int j = i + 1; j <= n - 1; j++)
        {
            ri *= arr[j];
        }

        answer[i] = li * ri;
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    cout << endl;
}