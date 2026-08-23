#include <iostream>
using namespace std;
void find(int n, int *prt1, int *prt2)
{
    *prt2 = n % 10;
    while (n > 9)
    {
        n = n / 10;
    }
    *prt1 = n;
}

int main()
{
    int n;

    cout << "enter the no. ";

    cin >> n;

    int first_digit;

    int last_digit;

    int *prt1 = &first_digit;

    int *prt2 = &last_digit;

    find(n, prt1, prt2);

    cout << "first num is: " << first_digit << endl;
    cout << "last num is : " << last_digit;
}