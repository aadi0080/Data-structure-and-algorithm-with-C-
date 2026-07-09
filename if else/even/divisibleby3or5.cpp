#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. ";
    cin>> n ;
    if ((n % 3 == 0) || (n % 5 == 0 )){
        cout<<"the no is divisible by 3 or 5 ";
    } 
    else {
        cout<<"the no is not divisible by 3 or 5  ";   
     }

}
