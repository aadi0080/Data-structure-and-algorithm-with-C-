#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int *p = &a;        // p store address of a
    int **D = &p;       //  D store adfdress of p and *D store the address  store  in *p yani a ka address
    cout << &a << endl; // address  of a .
    cout << p << endl;  // address  of a
    cout << *D << endl; // address store  in p yni a

    cout << a << endl;
    cout << *p << endl;
    cout << **D;
}