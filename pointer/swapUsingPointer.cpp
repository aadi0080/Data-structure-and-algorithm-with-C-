#include <iostream>
// pass by reference
using namespace std;
void swap(int *x, int *y)
{                  // *x me a ka adresss store hai *y me b ka,
    int TEMP = *x; // temp me address x ki value store ho gyi  yni a  .
    *x = *y;       // address x ki value  yni a  me  address  y ki value yni b store ho gyi
    *y = TEMP;     // address  y ki value yni b me address temp yni a
    return;
}
int main()
{
    int a, b;

    cin >> a >> b;

    int *x = &a, *y = &b; // passing address of a & b
    swap(x, y);

    cout << a << " " << b;
}
