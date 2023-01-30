#include <iostream>
using namespace std;
int linarSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Time complexity = O(n)
        }
    }
    if (i == n)
    {
        return -1;
    }
}
int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    int result = linarSearch(arr, n, key);
    cout << result;
}