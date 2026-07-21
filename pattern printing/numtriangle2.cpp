#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    int a=n;

    for(int i=1; i<=a; i++ ){
        for(int j=1; j<=n;j++){
            cout<< j <<" ";
            
        }
        cout<<endl;
        n=n-1;
    }

}