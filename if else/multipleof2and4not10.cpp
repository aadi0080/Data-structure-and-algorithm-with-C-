#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter the  number:  ";
    cin >> num;
    if (num % 2 == 0 && num % 4 == 0)
    {
        if (num % 10 != 0)

            cout << "the no. is divisible by 2&4 but not 10....  ";

        else
        {
            cout << "the no. is divisibled by only 2 4 and 10";
        }
    }
    else
    {
        cout << "the no. is not divisible by 2 & 4 .  ";
    }
}


