#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter  height ";
    cin>>n;
    int a=n;
    for(int i=1;i<=a; i++){
        for(int j=1; j<=n ;j++){
            cout << " * ";;
        
        }
        cout<<endl;
        n--;
    }
}
