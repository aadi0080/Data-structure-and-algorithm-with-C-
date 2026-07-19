#include<iostream>
using namespace std; 
int main(){
    int a , b ;
    cout<<"enter the base : ";
    cin>>a;
    cout<<"enter the exponent : ";
    cin>>b;
    int pro = 1;
for(int i=1 ; i<=b; i++){
    pro=pro*a;
}
cout<<"a to the prwer b is = " << pro;
}
