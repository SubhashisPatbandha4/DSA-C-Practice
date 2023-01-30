#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int i;
    for (i = a; i <=b; i++)
    {

        int j;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                cout<<i<<"is not a prime number \n";
                break;
            }
        }
        if(j==i/2+1)
         {
             cout<<i<<" is a prime number\n";
         }  


    }
}
