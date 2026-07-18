#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the  no. ";
    cin>>n;
    int pro = 0;

    for(int i = 1; i<=10 ; i++){
        pro = pro + n;
        cout<< n << "x" << i << "=" << pro<<endl;
    }
}