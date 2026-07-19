#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout << "enter no. of row ";
    cin >> n;
    cout << "enter no. of colunm ";
    cin >> m;
    for(int i=1; i<=n ;i++){
        for(int j=1; j<=m; j++){
            cout<< " * ";
        }
        cout<<endl;
    }
}