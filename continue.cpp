#include <iostream>
using namespace std;
int main()
{
    int date;
    int ctr = 0;
    for (date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        ctr += 1;
    }
    cout << "outing days =" << ctr;
}