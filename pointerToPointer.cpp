#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    cout << "a=" << a << endl;
    int *b = &a;
    cout << "b=" << b << endl;

    int **c = &b;

    cout << "c  =" << c << endl;
    cout << "*c=" << *c << endl;
    cout << "**c=" << **c << endl;



    int ***d=&c;
       cout << "d  =" << d << endl;
    cout << "*d=" << *d << endl;
    cout << "**d=" << **d << endl;
    cout << "***d=" << ***d << endl;

}