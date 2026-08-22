#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int *p = &a; // yahan hamne a ka address  p me  load  kar  diya ....
    int *p1 = &b;
    cout << p << endl;          // address  of  a '
    cout << *p << endl;         //  derefereance operator (*p )   assingning  value of a yani ki hame ek indirect  method  mil gya a  ko print  karne  ka
    cout << (*p + *p1) << endl; // without  asscess  a  and  b we  can add both  by using
    *p = 220;                   // we  also assing  value  to dereferance  operator and referance"a" store  that value..
    cout << a << endl;
}