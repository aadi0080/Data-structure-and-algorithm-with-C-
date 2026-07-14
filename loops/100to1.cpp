#include<iostream>
using namespace std;
int main (){
    int a = 100 ;
    // for(a=100;a>=1;a--)      //// <<<< via single variable.
    // cout<<a<<endl;

    //saparate variable.
    
    for(int i =1;a>=1;i++){
        cout<<a<<endl;
        a = a-1;
    }
}