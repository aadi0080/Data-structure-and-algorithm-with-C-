#include<iostream>
using namespace std; 
int main (){
    int  a , b,  c; 
    cout <<'enter the first side of triangle :';
    cin >> a ; 
    cout<<"enter the second side of triangle :";
    cin >>b;
    cout<<"enter the third side of triangle :";
    cin >>c;
    if( a+b= c && b+c =a && c+a = b){
        cout<<"the triangle is valid";
    }
    else{
        cout<<"the triangle is not valid";
    }
}
