#include<iostream>
using namespace std; 
int  main(){
    int a , b , c ;
    cout<<"enter the 1st no:   ";
    cin>>a;
    cout << "enter the 2nd no: " ;
    cin >> b;
    cout << "enter the 3rd no: ";
     cin >> c;
     if((a > b) && (a > c)){
        cout<< a ; 
     }
     if((b > a) && (b > c )){
        cout<< b;
     }
     if((c > a )&& (c > b)){
        cout<< c;
     }
   else if((a == b) && (a > c)){
        cout<< a << " and " << b << " are equal and greater than " << c;
     }
     else if((b == c) && (b > a)){
        cout<< b << " and " << c << " are equal and greater than " << a;
     }
     else if((c == a) && (c > b)){
        cout<< c << " and " << a << " are equal and greater than " << b;
     }
     else{
        cout<< a << ", "<< b <<" and "<< c <<" are equal";
     }
    return 0;
}