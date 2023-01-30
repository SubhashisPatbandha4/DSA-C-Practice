#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "enter the numbers = ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
            cout << "greatest number is " << a;
        else
            cout << "greatest number is " << c;
    }
    else
    {
        if(b>c)
            cout << "greatest number is " << b;
        else
            cout << "greatest number is " << c;
            
    }

    return 0;
}