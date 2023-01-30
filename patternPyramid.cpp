#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << "*";
        }
        for (j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n; i >=1; i--)
    {
        for (j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << "*";
        }
        for (j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}