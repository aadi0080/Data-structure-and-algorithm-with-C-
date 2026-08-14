#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter range ";
    cin >> n;
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= 2*n -1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        if(i<n){
            nsp= nsp-1;
        }
        else{
            nsp= nsp+1;
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }
        if(i<n){
            nst=nst+2;
        }
        else{
            nst = nst-2;
        }
        cout << endl;
        
    }
}