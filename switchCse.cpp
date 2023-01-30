#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch(n)
    {
        case 1:
            cout<<"1 hello";
            break;
        case 2:
            cout<<"2 hello";
            break;
        case 3:
            cout<<"3 hello";
            break;
        case 4:
            cout<<"4 hello";
            break;
        default:
            cout<<"please enter between 1-4";
            break;
    }
}
