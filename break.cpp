#include <iostream>
using namespace std;
int main()
{
    int money = 30;
    int expend;
    int temp = money;
    while (true)
    {
        cout << "you have " << money << " Rs to spend :) " << endl;
        cin >> expend;
        if ((money - expend) >= 0)
        {
            money -= expend;
        }
        else
        {
            cout<<"alert cant spend more";
        }
        if (money <= 0)
        {
            cout << "alert No balance";
            break;
        }
    }
}