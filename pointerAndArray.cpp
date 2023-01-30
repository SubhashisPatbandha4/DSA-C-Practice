#include <iostream>
using namespace std;
int main()
{
    int a[] = {10, 20, 30, 40, 50};

    cout << "*a=" << *a << endl;
    int *ptr = a;

    for (int i = 0; i <= sizeof(ptr); i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
}