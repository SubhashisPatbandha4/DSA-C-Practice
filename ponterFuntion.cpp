#include <iostream>
using namespace std;

int swap(int *a, int *b) // pass by reference
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "a=" << a << "b=" << b << endl;
    swap(&a, &b);
    cout << "a=" << a << "b=" << b << endl;
}