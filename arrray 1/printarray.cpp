#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter  the  size of the  array ";
    cin >> n;
    vector<int> arr(n);
    // input the elements of the array
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    // print the elements of the array
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";

    }
    
}