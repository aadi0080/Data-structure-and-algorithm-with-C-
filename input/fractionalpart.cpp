#include<iostream>
using namespace std;
int main (){
    float n;
    cout<<"enter  the no. ";
    cin>>n;
    float y ;
    y = n - (int)n;
    if (y <0 ) y += 1;
    cout<<"the  fractional part  is  :";
    cout<<y;
    

}
