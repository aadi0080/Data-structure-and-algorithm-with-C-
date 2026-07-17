#include <iostream>
using namespace std;
int main()
{

    int n;
    int lastdigit = 0;
    cout << "enter digits.";
    cin >> n;
    while (n > 0)
    {

        lastdigit = n % 10;
        n = n / 10;
        cout<<lastdigit;
    }

}
