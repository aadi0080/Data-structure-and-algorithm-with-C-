#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}
int combination(int n, int r)
{
    int npr = fact(n) / fact(n - r);
    return npr;
}

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int r;
    cout << "enter r ";
    cin >> r;
    int npr = combination(n, r);
    cout << npr;
}
