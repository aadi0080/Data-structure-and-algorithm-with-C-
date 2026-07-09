#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << " enter the no. : ";
     cin >> n;
     if (n % 3 == 0 && n % 5 == 0)
     {
          if (n % 15 != 0)
               cout << "the  no is  divisible is 3 and 5 but  not 15.  ";
          else
          {
               cout << "the no is  divisible  by 3 ,5 and  15. ";
          }
     }
     else
     {
          cout << "the  no. is not divisible  by 3 and 5. ";
     }
}