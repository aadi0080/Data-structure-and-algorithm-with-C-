#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "enter  range : ";
    cin >> n;
    int m = n - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<" *";
        }
        cout <<endl;
    }
}
